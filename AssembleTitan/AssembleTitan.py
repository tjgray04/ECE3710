#This is an assembler for a modified CR16 and MIPS instruction set in ECE3710 Computer Design Lab.
#Team:Freqs

import csv
import math

'''
4  5   5   5    9    4
R-Type[Op][Rd][Rs][Rt][Imm][Func]

4   5   5       18
I-Type[Op][Rd][Rs][    Imm      ]

4            28
J-Type[Op][                     ]


def jal(self):
	newline = ['jal','r31','r0','0']
	return newline
'''



class Assembler:
	def run(self,codeFile):
		print "Run"

		#Setup
		configurationFile = "InstructionSet.csv"
		if codeFile == 'none':
			codeFile = "AssemblyCode.csv"
		#codeFile = "C:\Users\Mark\Dropbox\Assembly Code\AssemblyCode.csv"
		op = []
		reg = {}

		
		print codeFile
		
		#Import CSV Configuration file
		configuration = self.importCSVfile(configurationFile)

		#Break Down the configuration 
		for line in configuration:
			if line[0] == 'op':
				op.append(line[1:]) #[type,instruction,opCode,*functionCode]
			elif line[0] == 'reg':
				reg[line[1]] = line[2]
				
		#Import Assembly.csv file
		assemblyCode = self.importCSVfile(codeFile)

		#Assemble assemble the code
		assembledCode,labels,address = self.assembleCode(assemblyCode,op,reg)


		#Implement labels & Jumps
		assembledCode = self.insertLabels(assembledCode,labels,address)


		print ''
		for inst in assembledCode:
			print inst

		#Implement branches

		#Write to CSV file
		self.saveFile(codeFile,assembledCode)

	def saveFile(self,filename,assembledCode):
		file = filename[:-4]+'.dat'
		with open(file, 'wb') as f:
			writer = csv.writer(f)
			for line in assembledCode:
				writer.writerow([line])
		print ''
		print 'Saved the assembled code as '+file

	def assembleCode(self,assemblyCode,op,reg):
		'''
		Takes in an array of assembly code lines from the CSV reader. Then assembles
		each line into its binary equivalent. 
		'''
		labels = {}
		address = {}
		constants = {}
		assembledCode = []
		PC = 0

		for line in assemblyCode:
			binary = ''
			opCode = ''
			func = ''
			type = ''
			
			#First determine if the line is a label
			if line[0].endswith(":"):
				#print line[0]+' '+str(PC)
				labels[line[0]] = self.dec2bin(PC,28) #Store labels in a dictionary with their binary addresses
				address[line[0]] = PC
			
			#handle constant variables
			elif line[0] == 'gcon': #gcon = Global constant 
				constants[line[1]] = line[2]
				
			else:
				#Determine the type,opCode,and function code
				for code in op:
					if code[1] == line[0]:
						opCode = code[2]
						type = code[0]
						if type == 'rtype':
							func = code[3]
						break	
				
				
				#Handle the assembly of different types
				if type == 'jtype':
					#print line
					newline = self.insertConstants(constants,line,type)
					binary = self.jtype(opCode,newline)
					
					
				elif type == 'itype':
					if opCode == '0110':
						newline = self.jRA()# handle jra separately
					#elif opCode == '1111':
					#	newline = self.jal() #take care of jal in the assembler
					else:
						newline = self.insertConstants(constants,line,type)
					binary = self.iType(opCode,newline,reg)
					
				elif type == 'rtype':
					binary = self.rType(opCode,func,line,reg)
					
				elif type == 'branch':
					binary = self.branchType(opCode,line,reg)
					
				elif type == 'set':
					binary = self.setType(opCode,func,line,reg)
					
			
				#Record each assembled line
				assembledCode.append(binary)
			
				#increment the Program Counter	
				PC+=1

		return assembledCode,labels,address

	def jRA(self):
		newline = ['jra','r0','r31','0']
		return newline

	def insertConstants(self,constants,line,type):
		newLine = line
		if type == 'jtype':
			for const in constants:#find the right const
				if line[1] == const:
					encoding = self.dec2bin(int(constants[const]),28)
					newLine = [line[0],encoding]
						
		if type == 'itype':
			for const in constants:#find the right const
					index = len(const)*-1
					if line[3] == const:
						immediate = constants[const]
						newLine = newLine = [line[0],line[1],line[2],immediate] 
							
								
					
		return newLine					


	def insertLabels(self,assembledCode,labels,address):
		'''
		This code searches for labels ending in ":". Then the labels are replaced with binary addresses to complete 
		the assembled code. 
		'''
		count = 0 #index in assembledCode

		for line in assembledCode:
			if line.endswith(':'): #search for labels      
				for label in labels:#find the right label
					index = len(label)*-1
					if line[index:] == label:
						newLine = line[0:4]+'_'+labels[label] #find the address that goes with that label
						assembledCode[count]= newLine  #replace the label with a binary address
						#print assembledCode[count]
						
			#handle branches correctly			
			elif line.endswith('b'):
				for label in labels:#find the right label
					index = len(label)*-1-1
					branchImm = address[label] - count-1 #find the distance to branch
					branchImm = self.dec2bin(branchImm,18)

					if line[index:-1] == label:
						newLine = line[:index]+branchImm #find the address that goes with that label
						assembledCode[count]= newLine  #replace the label with a binary address
						#print assembledCode[count]
			count+=1
					
		return assembledCode

	def jtype(self,opCode,line):
		'''
		Assembles J-Type instructions with there opCode and label. The labels need to be converted into
		binary later. 
		'''
		binary = opCode+'_'+line[1]#makes it more readable
		return binary

	def setType(self,opCode,func,line,reg):
		newline = ['set',line[1],opCode,'x',func]
		func = '1101'
		binary = self.rType('0100',func,newline,reg)
		return binary

	def branchType(self,opCode,line,reg):
		if line[1].endswith(':'):
			newline = ['b','x',opCode,'0']
			binary = self.iType('1100',newline,reg)
			binary = binary[:-18]+line[1]+'b'
		else:
			newline = ['b','x',opCode,line[1]]
			binary = self.iType('1100',newline,reg)
		return binary











	def iType(self,opCode,line,reg):
		'''
		Assembles I-Type instructions and returns them in binary form.
		'''
		Rs = ''
		Rd = ''

		#Determine the Immediate 
		Imm = self.dec2bin(int(line[3]),18)

		#Determine register values
		for register in reg:
			if register == line[1]:
				Rd = reg[register]
				
		for register in reg:
			if register == line[2]:
				Rs = reg[register]
					
		#Assemble the binary machine code		
		binary = opCode+'_'+Rd+'_'+Rs+'_'+Imm

		return binary	

	def rType(self,opCode,func,line,reg):
		'''
		Assembles R-Type instructions and returns them in binary form.
		'''
		Rs = ''
		Rd = ''
		Rt = ''

		#Determine register values
		for register in reg:
			if register == line[1]:
				Rd = reg[register]
				
		for register in reg:
			if register == line[2]:
				Rs = reg[register]
					
		for register in reg:
			if register == line[3]:
				Rt = reg[register]

		#Assemble the binary machine code
		binary = opCode+'_'+Rd+'_'+Rs+'_'+Rt+'_'+'000000000'+'_'+func

		return binary


	def importCSVfile(self,filename):
		'''
		Reads in a CSV file and stores the lines in an array. Blank lines are omitted. 
		'''
		lines = []
		with open(filename,'rb') as csvfile:
			reader = csv.reader(csvfile)
			for line in reader:
				if line != []: #Ignore empty lines 
					if not(line[0].startswith('//')): #Ignore lines that start with '//'
						if not(line[0].startswith('	')):
							lines.append(line)
		return lines	

	def dec2bin(self,integer,length):
		'''
		Converts decimal integers in two's complement numbers as strings
		'''
		binNumber = ''
		sign = 'pos'
		onesComp = ''
		twosComp = ''
		carry = '1'

		#Determine the sign 
		if integer < 0:
			sign = 'neg'

		#positive is easy
		if sign == 'pos':	
			while integer > 0:
				bit = str(integer%2)
				binNumber = bit+binNumber
				integer /= 2
			while len(binNumber)<length:
				binNumber = '0'+binNumber

		#if negative get abs and convert normally
		if sign == 'neg':
			integer = int(math.fabs(integer))
			while integer > 0:
				bit = str(integer%2)
				binNumber = bit+binNumber
				integer /= 2
			while len(binNumber)<length:
				binNumber = '0'+binNumber
			
			#Then flip the bits
			for digit in binNumber:
				if digit == '1':
					onesComp += '0'
				else:
					onesComp += '1'
			
			#Finally add 1
			for i in range(len(onesComp)):
				index = -1*(i+1)
				
				if (onesComp[index] == '1')&(carry == '1'):
					twosComp = '0'+twosComp
				elif (onesComp[index] == '0')&(carry == '1'):
					twosComp = '1'+twosComp
					carry = '0'
				else:
					twosComp = onesComp[index]+twosComp

			binNumber = twosComp	
				
						
		return binNumber
				
			
				
				
				
				
				
				
if __name__ == "__main__":
	try:
		CodeFile = sys.argv[1] 
	except:
		CodeFile = 'none'
	Assembler = Assembler()
	Assembler.run(CodeFile)
