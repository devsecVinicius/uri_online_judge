# include <stdio.h>
# include <math.h>

int main()
{
	double valores[3], c, b, a, aux;
	c = 1000000;
	a = -1000000;
	aux= 0;
	int i;
	
	// receber os valores
	for(i = 0; i < 3 ; ++i){
		scanf("%lf", &valores[i]);
	}
	
	// achar o menor
	for(i = 0 ; i < 3 ; ++i){
		if(valores[i] <= c)
			c = valores[i];
	}

	// achar o maior
	for(i = 0 ; i < 3 ; ++i){
		if(valores[i] >= a)
			a = valores[i];
	}
	aux = valores[0] + valores[1] + valores [2];
	b = aux - (a+c);

	//printf("\na = %lf\n", a);
	//printf("b = %lf\n", b);
	//printf("c = %lf\n", c);
	
	if( a >= (b+c) ){
		printf("NAO FORMA TRIANGULO\n");
	}
	else{
		if( pow(a,2) > ( pow(b,2) + pow(c,2) ) ){
			printf("TRIANGULO OBTUSANGULO\n");
	}
	}
	if( pow(a,2) == pow(b,2) + pow(c,2) ){
		printf("TRIANGULO RETANGULO\n");
	}
	if( pow(a,2) < ( pow(b,2) + pow(c,2) ) ){
		printf("TRIANGULO ACUTANGULO\n");
	}
	if( a == b && b == c ){
		printf("TRIANGULO EQUILATERO\n");
	}else{
		if( a == b )
			printf("TRIANGULO ISOSCELES\n");
		if( a == c )
			printf("TRIANGULO ISOSCELES\n");
		if( b == c )
			printf("TRIANGULO ISOSCELES\n");
	}
		
	return 0;
}
