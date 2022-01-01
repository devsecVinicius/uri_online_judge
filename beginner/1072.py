n = int(input())
i = 0
numbers = []
iN = 0
out = 0

while i < n:
	numbers.append(int(input()))
	i += 1
	
for x in numbers:
	if x >= 10 and x <= 20:
		iN += 1
	else:
		out += 1
		
print(f"{iN} in")
print(f"{out} out")
