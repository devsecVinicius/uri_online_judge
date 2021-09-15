# include <stdio.h>

int main (){
	
	
	int a,b;
	float c;
	int a2,b2;
	float c2;
	
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%f", &c);
	scanf("%i", &a2);
	scanf("%i", &b2);
	scanf("%f", &c2);
	
	float total = (b * c) + (b2 * c2);
	
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	
	return 0;
}
