# include <stdio.h>

int main(){
	
	int number, hours;
	float amount, salary;
	
	scanf("%i", &number);
	scanf("%i", &hours);
	scanf("%f", &amount);
	
	salary = hours * amount;
	
	printf("NUMBER = %i\n", number);
	printf("SALARY = U$ %.2f\n", salary);
	
	return 0;
}
