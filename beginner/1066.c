# include <stdio.h>

int main(){
	int n1,n2,n3,n4,n5, pares, impares, positivos, negativos;
	pares = impares = positivos = negativos = n1 = n2 = n3 = n4 = n5 = 0;
	
	scanf("%i", &n1);
	scanf("%i", &n2);
	scanf("%i", &n3);
	scanf("%i", &n4);
	scanf("%i", &n5);
	
	// Positivos
	if( n1 > 0 )
		positivos++;
	
	if( n2 > 0 )
		positivos++;
	
	if( n3 > 0 )
		positivos++;
	
	if( n4 > 0 )
		positivos++;
	
	if( n5 > 0 )
		positivos++;
	
	// Negativos
	if( n1 < 0 )
		negativos++;
	
	if( n2 < 0 )
		negativos++;
	
	if( n3 < 0 )
		negativos++;
	
	if( n4 < 0 )
		negativos++;
	
	if( n5 < 0 )
		negativos++;

	// Pares
	if( n1 % 2 == 0)
		pares++;
	
	if( n2 % 2 == 0)
		pares++;
	
	if( n3 % 2 == 0)
		pares++;
	
	if( n4 % 2 == 0)
		pares++;
	
	if( n5 % 2 == 0)
		pares++;

	// Impares
	if( n1 % 2 == 1 || n1 % 2 == -1)
		impares += 1;	
	
	if( n2 % 2 == 1 || n2 % 2 == -1)
		impares += 1;
	
	if(n3 % 2 == 1 || n3 % 2 == -1)
		impares += 1;
	
	if(n4 % 2 == 1 || n4 % 2 == -1)
		impares += 1;
	
	if(n5 % 2 == 1 || n5 % 2 == -1)
		impares += 1;
	
	printf("%i valor(es) par(es)\n", pares);
	printf("%i valor(es) impar(es)\n", impares);
	printf("%i valor(es) positivo(s)\n", positivos);
	printf("%i valor(es) negativo(s)\n", negativos);
	
	return 0;
}
