# include <stdio.h>

int main(){
	
	int n, i, numbers[10000] = {};
	
	scanf("%i", &n);
	
	for( i = 0 ; i < n ; ++i ){
		scanf("%i", &numbers[i]);
	}
	
	for( i = 0 ; i < n ; ++i ){
		if(numbers[i] == 0)
			printf("NULL\n");
		
		if(numbers[i] % 2 == 0){
			if( numbers[i] > 0 ){
				printf("EVEN POSITIVE\n");
			}
				
			if( numbers[i] < 0 ){
				printf("EVEN NEGATIVE\n");
			}
		}
		
		if(numbers[i] % 2 == 1 || numbers[i] % 2 == -1){
			if( numbers[i] > 0 ){
				printf("ODD POSITIVE\n");
			}
			
			if( numbers[i] < 0 ){
				printf("ODD NEGATIVE\n");
			}
		}
	}
	
	return 0;
}
