# include <stdio.h>

int main(){
	float salary = 0.0, taxes;
	scanf("%f", &salary);
	
	if(salary >= 0 && salary <= 2000.00){
		printf("Isento\n");
	}
	
	if(salary >= 2000.01 && salary <= 3000.00){
		salary = salary - 2000;
		printf("R$ %.2f\n", salary*0.08);
	}
	
	if(salary >= 3000.01 && salary <= 4500.00){
		taxes = 1000 * 0.08;
		taxes += (salary - 3000.00) * 0.18;
		printf("R$ %.2f\n", taxes);
	}
	
	if(salary > 4500.00){
		taxes = 1000 * 0.08;
		taxes += 1500 * 0.18;
		taxes += (salary - 4500.00) * 0.28;
		printf("R$ %.2f\n", taxes);
	}
	return 0;
}
