outputs = []

while True:
    x = int(input())
    if x == 0:
        break;
    i = 0
    resultado = 0
    while i < 5:
        if x % 2 == 0:
            i+=1
            resultado += x
        x+=1
    outputs.append(resultado)

for output in outputs:
    print(output)
