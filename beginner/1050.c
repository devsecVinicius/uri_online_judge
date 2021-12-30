# include <stdio.h>

int main(){
	int ddd;
	
	scanf("%i", &ddd);
	
	if(ddd == 61){
		printf("Brasilia\n");
		goto end;
	}
	
	if(ddd == 71){
		printf("Salvador\n");
		goto end;
	}
	
	if(ddd == 11){
		printf("Sao Paulo\n");
		goto end;
	}
	
	if(ddd == 21){
		printf("Rio de Janeiro\n");
		goto end;
	}
	
	if(ddd == 32){
		printf("Juiz de Fora\n");
		goto end;
	}
	
	if(ddd == 19){
		printf("Campinas\n");
		goto end;
	}
	
	if(ddd == 27){
		printf("Vitoria\n");
		goto end;
	}
		
	if(ddd == 31){
		printf("Belo Horizonte\n");
		goto end;
	}
	
	printf("DDD nao cadastrado\n");
	
	end:
	return 0;
}
