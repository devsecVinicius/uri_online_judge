n1 = int(input())
n2 = int(input())
n3 = int(input())
n4 = int(input())
n5 = int(input())
aux = 0

if n1 % 2 == 0:
	aux += 1

if n2 % 2 == 0:
	aux += 1

if n3 % 2 == 0:
	aux += 1
	
if n4 % 2 == 0:
	aux += 1	
	
if n5 % 2 == 0:
	aux += 1
	
print(aux,"valores pares")
