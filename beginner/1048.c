# include <stdio.h>
# define PERCENTUAL15 15
# define PERCENTUAL12 12
# define PERCENTUAL10 10
# define PERCENTUAL7 7
# define PERCENTUAL4 4

int main(){
	float salary = 0.0, moneyEarned = 0;
	
	scanf("%f", &salary);
	int percentualUtilized = 0;
	
	if( salary >= 0 && salary <= 400.00 ){
		moneyEarned = (salary*PERCENTUAL15) / 100;
		percentualUtilized = PERCENTUAL15;
	}
	
	if( salary >= 400.01 && salary <= 800.00 ){
		moneyEarned = (salary*PERCENTUAL12) / 100;
		percentualUtilized = PERCENTUAL12;
	}
	
	if( salary >= 800.01 && salary <= 1200.00 ){
		moneyEarned = (salary*PERCENTUAL10) / 100;
		percentualUtilized = PERCENTUAL10;
	}
	
	if( salary >= 1200.01 && salary <= 2000.00 ){
		moneyEarned = (salary*PERCENTUAL7) / 100;
		percentualUtilized = PERCENTUAL7;
	}
	
	if( salary > 2000.00 ){
		moneyEarned = (salary*PERCENTUAL4) / 100;
		percentualUtilized = PERCENTUAL4;
	}
	
	printf("Novo salario: %.2f\n", salary + moneyEarned );
	printf("Reajuste ganho: %.2f\n", moneyEarned );
	printf("Em percentual: %i %%\n", percentualUtilized );
	
	return 0;
}
