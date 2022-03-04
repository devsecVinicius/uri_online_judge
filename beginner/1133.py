x = int(input())
y = int(input())

while x < y -1:
    x += 1
    if x % 5 == 2 or x % 5 == 3:
        print(x)

while y < x -1:
    y += 1
    if y % 5 == 2 or y % 5 == 3:
        print(y)