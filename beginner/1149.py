lista = input().split(' ')

a = int(lista[0])

n = int(lista[-1])

i = 0
soma = 0

while i < n:
    soma += a + i
    i += 1

print(soma)
