# include <stdio.h>

int main (){
	
	char nome[30] = "";
	double salary, sells;
	
	scanf("%s", nome);
	scanf("%lf", &salary);
	scanf("%lf", &sells);
	
	double total = (0.15 * sells) + salary;
	
	printf("TOTAL = R$ %.2lf\n", total);
	
	return 0;
}
