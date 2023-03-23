n = int(input())

i = 0


while i < n:
    i+=1 

    x = int(input())


    if x%2 != 0:
        print(f'{x} nao eh perfeito')
    else:
        j = 1
        sum_divisors = 0
        while j < x:
            if x%j == 0:
                sum_divisors += j
            j+=1
        if sum_divisors == x:
            print(f'{x} eh perfeito')
        else:
            print(f'{x} nao eh perfeito')
