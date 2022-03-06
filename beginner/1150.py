x = int(input())

z = x-1

while z <= x:
    z = int(input())

i = 1

mylist = [x,]
aux = x

while (sum(mylist)) < z:
    aux += 1
    mylist.append(aux)
    i += 1

print(i)