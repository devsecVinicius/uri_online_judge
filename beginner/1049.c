# include <stdio.h>
# include <string.h>

int main(){
	char primeiraPalavra[15] = {""};
	char segundaPalavra[15] = {""};
	char terceiraPalavra[15] = {""};
	int retorno = 1;
	
	scanf("%s", primeiraPalavra);
	scanf("%s", segundaPalavra);
	scanf("%s", terceiraPalavra);
	
	retorno = strcmp(primeiraPalavra, "vertebrado");
	if( retorno == 0 ){
		retorno = strcmp(segundaPalavra, "ave");
		if(  retorno == 0 ){
			retorno = strcmp(terceiraPalavra, "carnivoro");
			if(  retorno == 0 ){
				printf("aguia\n");
			}
			retorno = strcmp(terceiraPalavra, "onivoro");
			if(  retorno == 0 ){
				printf("pomba\n");
			}
		}
		retorno = strcmp(segundaPalavra, "mamifero");
		if(  retorno == 0 ){
			retorno = strcmp(terceiraPalavra, "onivoro");
			if(  retorno == 0 ){
				printf("homem\n");
			}
			retorno = strcmp(terceiraPalavra, "herbivoro");
			if( retorno == 0){
				printf("vaca\n");
			}
		}
	}
	
	retorno = strcmp(primeiraPalavra, "invertebrado");
	if( retorno == 0){
		retorno = strcmp(segundaPalavra, "inseto");
		if( retorno == 0){
			retorno = strcmp(terceiraPalavra, "hematofago");
			if( retorno == 0){
				printf("pulga\n");
			}
			retorno = strcmp(terceiraPalavra, "herbivoro");
			if( retorno == 0){
				printf("lagarta\n");
			}
		}
		
		retorno = strcmp(segundaPalavra, "anelideo");
		if( retorno == 0){
			retorno = strcmp(terceiraPalavra, "hematofago");
			if( retorno == 0){
				printf("sanguessuga\n");
			}
			retorno = strcmp(terceiraPalavra, "onivoro");
			if( retorno == 0){
				printf("minhoca\n");
			}
		}
	}
	
	return 0;
}
