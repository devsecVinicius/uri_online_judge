salary = float(input())
PERCENTUAL15 = 15
PERCENTUAL12 = 12
PERCENTUAL10 = 10
PERCENTUAL7 = 7
PERCENTUAL4 = 4
percentualutilized = 0
moneyEarned = 0

if salary >= 0 and salary <= 400.00:
	moneyEarned = (salary*PERCENTUAL15) / 100
	percentualutilized = PERCENTUAL15
	
if salary >= 400.01 and salary <= 800.00:
	moneyEarned = (salary*PERCENTUAL12) / 100
	percentualutilized = PERCENTUAL12

if salary >= 800.01 and salary <= 1200.00:
	moneyEarned = (salary*PERCENTUAL10) / 100
	percentualutilized = PERCENTUAL10
	
if salary >= 1200.01 and salary <= 2000.00:
	moneyEarned = (salary*PERCENTUAL7) / 100
	percentualutilized = PERCENTUAL7

if salary > 2000.00:
	moneyEarned = (salary*PERCENTUAL4) / 100
	percentualutilized = PERCENTUAL4

print(f"Novo salario: {(salary+moneyEarned):.2f}")
print(f"Reajuste ganho: {moneyEarned:,.2f}")
print(f"Em percentual: {percentualutilized} %")
