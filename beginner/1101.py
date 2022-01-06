n = 999999
m = 999999
output = []

while True:
	n, m = input().split(" ")
	n, m = int(n), int(m)
	soma = 0
	aux = []
	if n <= 0 or m <=0:
		break
	if n == m:
		print(f"Sum={n}")
	if n < m:
		while n <= m:
			aux.append(str(n)+" ")
			soma += n
			n += 1
		aux.append("Sum="+str(soma))
		output.append(''.join(aux))
		continue
	if m < n:
		while m <= n:
			aux.append(str(m)+" ")
			soma += m
			m += 1
		aux.append("Sum="+str(soma))
		output.append(''.join(aux))
		continue

for x in output:
	print(x)
