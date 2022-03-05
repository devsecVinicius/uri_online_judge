x, y = input().split(' ')
x, y = int(x), int(y)
i, j = 1, 0

while i < y:
    j = 0

    while j < x:
        if not(j == x-1):
            print(i,'',end='')
        else:
            print(i,end='')
        j += 1
        i += 1
    
    print()