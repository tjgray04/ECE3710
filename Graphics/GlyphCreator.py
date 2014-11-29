from PIL import Image
import csv

class GlyphCreator:

	def run(self):
		#Import the list of Glyphs for the library 
		glyphs = self.importCSVfile('GlyphLibrary.csv')
		
		#Create an array to store the 8-bit color for each pixel
		pixelData = []
		
		#Get the pixel data for the glyphs in order. 
		print ''
		print 'Creating Glyph Library ...'
		print ''
		for glyph in glyphs:
			pixels = self.getPixels(glyph[0]+'.png')#retrive the pixel information for each glyph
			for pixel in pixels: #add the pixels to the glyph library
				pixelData.append(pixel[0])
			print '	Created '+glyph[0]
		
		#Save the pixel data into a '.dat' file
		self.saveFile('GlyphLibrary',pixelData)
	
		
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
						lines.append(line)
		return lines
			
	def saveFile(self,filename,pixelData):
		file = filename+'.dat'
		with open(file, 'wb') as f:
			writer = csv.writer(f)
			for line in pixelData:
				writer.writerow([line])
		print ''
		print 'Saved the Glyphs in '+file
		
	def getPixels(self,filename):
		#open the file
		img = Image.open(filename)

		#Get the RGBA color data
		pix_val = list(img.getdata())

		#Convert the data to 8bit color
		pixels = []
		for set in pix_val:
			pixel = [set[0]/32,set[1]/32,set[2]/128]
			pixels.append(pixel)
			
		#convert pixels to binary encoding
		count = 0
		for pixel in pixels:
			pixels[count] = [self.dec2bin(pixel[0],3)+self.dec2bin(pixel[1],3)+self.dec2bin(pixel[2],2)]
			count += 1
					
		return pixels 

		
		
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
	GlyphCreator = GlyphCreator()
	GlyphCreator.run()
