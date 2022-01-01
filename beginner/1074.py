n = int(input())
i = 0
numbers = []

while i < n:
	numbers.append(int(input()))
	i += 1

for x in numbers:
	if x == 0:
		print("NULL")
	if x % 2 == 0:
		if x > 0:
			print("EVEN POSITIVE")  
		if x < 0:
			print("EVEN NEGATIVE")  
	if x % 2 == 1:
		if x > 0:
			print("ODD POSITIVE")  
		if x < 0:
			print("ODD NEGATIVE")  
