# include <stdio.h>

int main(){
	float n, i, cobaias, coelhos, ratos, sapos, auxInt;
	n = i = cobaias = coelhos = ratos = sapos = auxInt = 0;
	char auxChar;
	
	scanf("%f", &n);

	for( i = 0 ; i < n ; ++i ){
		scanf("%f %c", &auxInt, &auxChar);
		cobaias += auxInt;
		if( auxChar == 'C'){
			coelhos += auxInt;
		}
		if( auxChar == 'R'){
			ratos += auxInt;
		}
		if( auxChar == 'S'){
			sapos += auxInt;
		}
	}
	
	printf("Total: %.0f cobaias\n", cobaias);
	printf("Total de coelhos: %.0f\n", coelhos);
	printf("Total de ratos: %.0f\n", ratos);
	printf("Total de sapos: %.0f\n", sapos);
	printf("Percentual de coelhos: %.2f %%\n", (coelhos/cobaias) * 100.0 );
	printf("Percentual de ratos: %.2f %%\n", (ratos/cobaias) * 100.0 );
	printf("Percentual de sapos: %.2f %%\n", (sapos/cobaias) * 100.0 );

	return 0;
}
