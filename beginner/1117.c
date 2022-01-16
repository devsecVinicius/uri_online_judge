# include <stdio.h>

int main(){

	float score1, score2, aux;
	int i;
	score1 = score2 = aux = 0;
	
	for( i = 0 ; i < 2 ; ){
		scanf("%f", &aux);
		if( aux > 10 || aux < 0 ){
			printf("nota invalida\n");
		}else{
			score1 = score2;
			score2 = aux;
			++i;
		}
	}
	printf("media = %.2f\n", (score1+score2) / 2 );
	return 0;
}
