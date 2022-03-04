x = int(input())
y = int(input())
sum = 0

if x < y:
    while x <= y:
        if (x % 13) != 0:
            sum += x
        x += 1
elif x > y:
    while y <= x:
        if (y % 13) != 0:
            sum += y
        y += 1

print(sum)