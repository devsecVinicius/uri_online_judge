# include <stdio.h>

int main(){

	int a;
	int n;
	int soma = 0;
	int i = 0;

	scanf("%i", &a);

	for( i = 0 ; ; ++i){

		scanf("%i", &n);
		if( n > 0 ){
			break;
		}

	}
	
	for( i = 0 ; i < n ; ++i ){
		soma = soma + (a+i);
	}

	printf("%i\n", soma);

	return 0;
}
