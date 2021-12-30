salary = float(input())

if salary >= 0 and salary <= 2000.00:
	print("Isento")
	
if salary >= 2000.01 and salary <= 3000.00:
	salary = salary - 2000
	print(f"R$ {(salary*0.08):.2f}")
	
if salary >= 3000.01 and salary <= 4500.00:
	taxes = 1000 * 0.08
	taxes += (salary - 3000.00) * 0.18
	print(f"R$ {taxes:.2f}")

if salary > 4500.00:
	taxes = 1000 * 0.08
	taxes += 1500 * 0.18
	taxes += (salary - 4500.00) * 0.28
	print(f"R$ {taxes:.2f}")
