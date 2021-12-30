n1 = int(input())
n2 = int(input())
n3 = int(input())
n4 = int(input())
n5 = int(input())
pares = 0
impares = 0
positivos = 0
negativos = 0

# Positivos
if n1 > 0:
	positivos += 1

if n2 > 0:
	positivos += 1

if n3 > 0:
	positivos += 1

if n4 > 0:
	positivos += 1
	
if n5 > 0:
	positivos += 1

# Negativos
if n1 < 0:
	negativos += 1

if n2 < 0:
	negativos += 1

if n3 < 0:
	negativos += 1

if n4 < 0:
	negativos += 1
	
if n5 < 0:
	negativos += 1

# Pares
if n1 % 2 == 0:
	pares += 1	
	
if n2 % 2 == 0:
	pares += 1	
	
if n3 % 2 == 0:
	pares += 1	
	
if n4 % 2 == 0:
	pares += 1	
	
if n5 % 2 == 0:
	pares += 1	

# Impares
if n1 % 2 == 1:
	impares += 1	
	
if n2 % 2 == 1:
	impares += 1	
	
if n3 % 2 == 1:
	impares += 1	
	
if n4 % 2 == 1:
	impares += 1	
	
if n5 % 2 == 1:
	impares += 1
	
print(pares,"valor(es) par(es)")
print(impares,"valor(es) impar(es)")
print(positivos,"valor(es) positivo(s)")
print(negativos,"valor(es) negativo(s)")
