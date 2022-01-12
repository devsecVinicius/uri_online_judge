n = int(input())
i = 0
while i < n:
	x, y = input().split(" ")
	x, y = int(x), int(y)
	if y == 0:
		print("divisao impossivel")
	else:
		print(x/y)
	i += 1
