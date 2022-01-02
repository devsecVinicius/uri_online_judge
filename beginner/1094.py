n = int(input())
i = 0
cobaias = 0
coelhos = 0
ratos = 0
sapos = 0

while i < n:
	aux1, aux2 = input().split(" ")
	aux1 = int(aux1)
	cobaias += aux1
	if aux2 == "C":
		coelhos += aux1
	if aux2 == "R":
		ratos += aux1
	if aux2 == "S":
		sapos += aux1
	i += 1
	
print(f"Total: {cobaias} cobaias")
print(f"Total de coelhos: {coelhos}")
print(f"Total de ratos: {ratos}")
print(f"Total de sapos: {sapos}")
print(f"Percentual de coelhos: {((coelhos/cobaias) * 100):.2f} %")
print(f"Percentual de ratos: {((ratos/cobaias) * 100):.2f} %")
print(f"Percentual de sapos: {((sapos/cobaias) * 100):.2f} %")
