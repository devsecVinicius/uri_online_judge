#include <stdio.h>

int main()
{
	int ageInDays = 0 ;
	
	scanf("%i", &ageInDays);
	
	int anos = ageInDays / 365;
	int meses = (ageInDays - (anos*365)) / 30 ;
	int dias = ageInDays - ((anos*365) + (meses*30)) ;
	
	printf("%i ano(s)", anos);
	printf("\n%i mes(es)", meses);
	printf("\n%i dia(s)\n", dias);
	
	return 0;
}
