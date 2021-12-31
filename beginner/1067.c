# include <stdio.h>

int main(){
	int numero;
	scanf("%i", &numero);
	
	int i = 0;
	
	while(i <= numero){
		if( i % 2 == 1){
			printf("%i\n", i);
		}
		i += 1;
	}
	
	return 0;
}
