n = int(input())
contador = n
lista_de_divisores = []

while contador > 0:
    resultado_da_divisao = n % contador
    if resultado_da_divisao == 0:
        lista_de_divisores.append(contador)
    
    contador -= 1

lista_de_divisores.reverse()

for l in lista_de_divisores:
    print(l)