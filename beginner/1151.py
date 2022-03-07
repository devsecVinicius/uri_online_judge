n = int(input())

listaFibonacci = [0, 1, 1]

while (len(listaFibonacci)) < n:
    listaFibonacci.append(listaFibonacci[-1]+listaFibonacci[-2])

for fibonacciNumber in listaFibonacci:
    if fibonacciNumber == listaFibonacci[-1]:
        print(fibonacciNumber)
    else:
        print(fibonacciNumber,"",end='')