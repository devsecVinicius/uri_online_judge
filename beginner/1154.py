quantidade_de_inputs = 0
soma = 0

while True:
    n = int(input())
    if n <= 0:
        break

    soma += n
    quantidade_de_inputs += 1

print(f'{soma/quantidade_de_inputs:.2f}')