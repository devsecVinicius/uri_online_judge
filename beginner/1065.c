# include <stdio.h>

int main(){
	int n1, n2, n3, n4, n5, aux;
	aux = n1 = n2 = n3 = n4 = n5 = 0;
	
	scanf("%i", &n1);
	scanf("%i", &n2);
	scanf("%i", &n3);
	scanf("%i", &n4);
	scanf("%i", &n5);
	
	if(n1 % 2 == 0)
		aux++;
	
	if(n2 % 2 == 0)
		aux++;
	
	if(n3 % 2 == 0)
		aux++;
	
	if(n4 % 2 == 0)
		aux++;
	
	if(n5 % 2 == 0)
		aux++;
	
	printf("%i valores pares\n", aux);	
	
	return 0;
}
