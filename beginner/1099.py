n = int(input())
i = 0
output = []

while i < n:
	soma = 0
	aux1, aux2 = input().split(" ")
	aux1, aux2 = int(aux1), int(aux2)
	if aux1 == aux2:
		output.append(0)
	if aux1 < aux2:
		aux1 += 1
		while aux1 < aux2:
			if aux1 % 2 == 1:
				soma += aux1
			aux1 += 1
		output.append(soma)
	if aux2 < aux1:
		aux2 += 1
		while aux2 < aux1:
			if aux2 % 2 == 1:
				soma += aux2
			aux2 += 1
		output.append(soma)
	i += 1
		 
for x in output:
	print(x)
