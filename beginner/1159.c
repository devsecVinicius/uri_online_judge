# include<stdio.h>

int main(){

	int x, resultado, lista;
	x = resultado = lista = 0;

	int outputs[100] = {};

	while(1){
		scanf("%i", &x);

		if(x == 0)
			break;
		resultado = 0;

		for(int i = 0 ; i < 5 ; ){
			if( ( x % 2) == 0 ){
				resultado = resultado + x;
				++i;
			}
			++x;
		}
		outputs[lista++] = resultado;

	}

	for( int i = 0 ; i < lista ; ++i )
		printf("%i\n", outputs[i]);


	return 0;
}
