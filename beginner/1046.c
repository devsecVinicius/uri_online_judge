# include <stdio.h>

int main(){
	int hora1, hora2, duracao;
	
	scanf("%i", &hora1);
	scanf("%i", &hora2);

	duracao = 24 - hora1;
	duracao = duracao + hora2;

	if(duracao > 24){
		duracao = hora2 - hora1;
	}

	printf("O JOGO DUROU %i HORA(S)\n", duracao);

	return 0;
}
