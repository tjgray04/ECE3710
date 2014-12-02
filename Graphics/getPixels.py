from PIL import Image

#open the file
img = Image.open('GreenCircleOnRed.png')

#Get the RGBA color data
pix_val = list(img.getdata())

#Convert the data to 8bit color
pixels = []
for set in pix_val:
	pixel = [set[0]%8,set[1]%8,set[2]%4]
	pixels.append(pixel)

#Print out a grid for the bitmap
print '[R, G, B]'
print ''
print '	    0         1         2         3         4         5         6         7'
for i in range(8):
	print str(i)+'	'+str(pixels[i])+' '+str(pixels[i+1])+' '+str(pixels[i+2])+' '+str(pixels[i+3])+' '+str(pixels[i+4])+ \
	' '+str(pixels[i+5])+' '+str(pixels[i+6])+' '+str(pixels[i+7])
	
def dec2bin(integer,length):
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
	
#convert pixels to binary encoding
count = 0
for pixel in pixels:
		pixels[count] = [dec2bin(pixel[0],3)+dec2bin(pixel[1],3)+dec2bin(pixel[2],2)]
		count += 1
	
print ''	
#Print out a grid for the bitmap
print '8-bit Color'
print ''
print '	      0            1            2            3            4            5            6            7'
for i in range(8):
	print str(i)+'	'+str(pixels[i])+' '+str(pixels[i+1])+' '+str(pixels[i+2])+' '+str(pixels[i+3])+' '+str(pixels[i+4])+ \
	' '+str(pixels[i+5])+' '+str(pixels[i+6])+' '+str(pixels[i+7])	
