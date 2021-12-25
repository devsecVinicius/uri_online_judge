a, b, c = input().split(' ')
a, b, c = float(a), float(b), float(c)

if(a < b + c and b < a + c and c < a + b):
	print('Perimetro =', a+b+c)
else:
	print('Area =', ((a+b)*c) / 2)
