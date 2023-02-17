n = int(input())
i = 0

outputs = []

while i < n: 
    i+=1
    n1, n2 = input().split(' ')
    n1, n2 = int(n1), int(n2)
    j = 0
    resultado = 0
    while j < n2:
        if n1 % 2 != 0:
            resultado += n1
            j+=1
        n1+=1

    outputs.append(resultado)

for output in outputs:
    print(output)
