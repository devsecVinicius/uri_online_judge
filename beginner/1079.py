n = int(input())
numbers = []
i = 0

while i < n :
	aux1, aux2, aux3 = input().split(" ")
	aux1, aux2, aux3 = float(aux1), float(aux2), float(aux3)
	numbers.append(aux1)
	numbers.append(aux2)
	numbers.append(aux3)
	i += 1
else:
	i = 0
	
while i < n*3:
	print(f"{( ( (numbers[i] * 2) + (numbers[i+1] * 3) + (numbers[i+2] * 5 ) ) / 10 ):.1f}" )
	i += 3
