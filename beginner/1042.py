a, b, c = input().split(' ')
a, b, c = int(a), int(b), int(c)
#menor
if a < b and a < c:
	menor = a
if b < a and b < c:
	menor = b
if c < a and c < b:
	menor = c
	
# maior
if a > b and a > c:
	maior = a
if b > a and b > c:
	maior = b
if c > a and c > b:
	maior = c

# medio
if maior != a and menor != a:
	medio = a
if maior != b and menor != b:
	medio = b
if maior != c and menor != c:
	medio = c
	
print(menor)
print(medio)
print(maior)
print()
print(a)
print(b)
print(c)
