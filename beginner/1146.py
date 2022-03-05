n = 1

while n != 0:
    n = int(input())
    i = 1
    
    while i <= n:
        if i == n:
            print(i, end='')
        else:
            print(i,'',end='')
        i += 1
    if not(n == 0):
        print()