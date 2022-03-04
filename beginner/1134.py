alcool = 0
gasolina = 0
diesel = 0

while True:
    aux = int(input())

    if aux == 1:
        alcool += 1
    if aux == 2:
        gasolina += 1
    if aux == 3:
        diesel += 1
    if aux == 4:
        break

print("MUITO OBRIGADO")
print("Alcool:", alcool)
print("Gasolina:", gasolina)
print("Diesel:", diesel)