n1 = float(input())
n2 = float(input())
n3 = float(input())
n4 = float(input())
n5 = float(input())
n6 = float(input())
x = 0
avg = 0

if n1 > 0:
	x += 1
	avg += n1

if n2 > 0:
	x += 1
	avg += n2

if n3 > 0:
	x += 1
	avg += n3
	
if n4 > 0:
	x += 1
	avg += n4
	
if n5 > 0:
	x += 1
	avg += n5
		
if n6 > 0:
	x += 1
	avg += n6
	
print(f"{x} valores positivos")
print(f"{(avg/x):.1f}")
