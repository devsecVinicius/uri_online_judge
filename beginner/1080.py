n = 0
highest = 0
inputPosition = 0
i = 1

while i <= 100:
	n = int(input())
	if n > highest:
		highest = n
		inputPosition = i
	i += 1
	
print(highest)
print(inputPosition)
