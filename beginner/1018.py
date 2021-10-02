n = int(input())

print(n)

notaDe100 = 0
notaDe50 = 0
notaDe20 = 0
notaDe10 = 0
notaDe5 = 0
notaDe2 = 0
notaDe1 = 0

if n >= 100:
	notaDe100 = int(n/100)
	n = n % 100
	
if n >= 50:
	notaDe50 = int(n/50)
	n = n % 50
	
if n >= 20:
	notaDe20 = int(n/20)
	n = n % 20
	
if n >= 10:
	notaDe10 = int(n/10)
	n = n % 10
	
if n >= 5:
	notaDe5 = int(n/5)
	n = n % 5
	
if n >= 2:
	notaDe2 = int(n/2)
	n = n % 2
	
if n >= 1:
	notaDe1 = int(n/1)
	n = n % 1

print(notaDe100, "nota(s) de R$ 100,00")
print(notaDe50, "nota(s) de R$ 50,00")
print(notaDe20, "nota(s) de R$ 20,00")
print(notaDe10, "nota(s) de R$ 10,00")
print(notaDe5, "nota(s) de R$ 5,00")
print(notaDe2, "nota(s) de R$ 2,00")
print(notaDe1, "nota(s) de R$ 1,00")
