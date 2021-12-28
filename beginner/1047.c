# include <stdio.h>

int main (){
	int h1, h2, m1, m2, duracaoHoras, duracaoMinutos;
	h1 = h2 = m1 = m2 = duracaoHoras = duracaoMinutos = 0;
	
	scanf("%i", &h1);
	scanf("%i", &m1);
	scanf("%i", &h2);
	scanf("%i", &m2);
	
	
	duracaoHoras = h2 - h1;
	duracaoMinutos = m2 - m1;
	
	if(duracaoHoras == 0 && duracaoMinutos == 0){
		duracaoHoras = 24;
	}else{
		if(duracaoMinutos < 0){
			duracaoMinutos += 60;
			duracaoHoras--;
		}
		if(duracaoHoras < 0){
			duracaoHoras += 24;
		}
	}
	
	printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", duracaoHoras, duracaoMinutos);
	
	return 0;
}
