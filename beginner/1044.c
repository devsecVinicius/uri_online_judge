# include <stdio.h>

int main (){
	int a, b, menor, maior;
	float aux;
	
	scanf("%i", &a);
	scanf("%i", &b);
	
	if(a > b){
		menor = b;
		maior = a;
	}else{
		menor = a;
		maior = b;
	}
	
	aux = maior / menor;
	
	if( maior == aux * menor){
		printf("Sao Multiplos\n");
	}else{
		printf("Nao sao Multiplos\n");
	}
	
	return 0;
}
