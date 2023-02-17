#include <stdio.h>

int main(){

	int n, n1, n2, resultado;
	n = n1 = n2 = resultado = 0;

	int outputs[100] = {};
	int posicaoDaLista = 0;

	scanf("%i", &n);

	for( int i = 0 ; i < n ; ++i){
		scanf("%i", &n1);
		scanf("%i", &n2);

		resultado = 0;

		for(int i = 0 ; i < n2 ; ++n1 ){
			if( n1 % 2 != 0 ){
				resultado = resultado + n1;
				++i;
			}
		}
		outputs[posicaoDaLista++] = resultado;
	}

	for(int i = 0 ; i < n ; ++i){
		printf("%i\n", outputs[i]);
	}

	return 0;

}
