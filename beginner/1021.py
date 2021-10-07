n = float(input())
n += 0.001

notaDe100 = 0;
notaDe50 = 0;
notaDe20 = 0;
notaDe10 = 0;
notaDe5 = 0;
notaDe2 = 0;

moedaDe1 = 0
moedaDe50 = 0
moedaDe25 = 0
moedaDe10 = 0
moedaDe05 = 0
moedaDe01 = 0

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
	moedaDe1 = int(n/1)
	n = n % 1
	
if n >= 0.50:
	moedaDe50 = int(n/0.50)
	n = n % 0.50
	
if n >= 0.25:
	moedaDe25 = int(n/0.25)
	n = n % 0.25
	
if n >= 0.10:
	moedaDe10 = int(n/0.10)
	n = n % 0.10
	
if n >= 0.05:
	moedaDe05 = int(n/0.05)
	n = n % 0.05
	
if n >= 0.01:
	moedaDe01 = int(n/0.01)
	n = n % 0.01


print("NOTAS:")
print(notaDe100, "nota(s) de R$ 100.00")
print(notaDe50, "nota(s) de R$ 50.00")
print(notaDe20, "nota(s) de R$ 20.00")
print(notaDe10, "nota(s) de R$ 10.00")
print(notaDe5, "nota(s) de R$ 5.00")
print(notaDe2, "nota(s) de R$ 2.00")
print("MOEDAS:")
print(moedaDe1, "moeda(s) de R$ 1.00")
print(moedaDe50, "moeda(s) de R$ 0.50")
print(moedaDe25, "moeda(s) de R$ 0.25")
print(moedaDe10, "moeda(s) de R$ 0.10")
print(moedaDe05, "moeda(s) de R$ 0.05")
print(moedaDe01, "moeda(s) de R$ 0.01")

