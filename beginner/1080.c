# include <stdio.h>

int main(){
	int i, highest, inputPosition, n;
	i = highest = inputPosition = n = 0;
	
	for( i = 1 ; i <= 100 ; ++i){
		scanf("%i", &n);
		if( n > highest){
			highest = n;
			inputPosition = i;
		}
	}
	
	printf("%i\n", highest);
	printf("%i\n", inputPosition);
	
	
	return 0;
}
