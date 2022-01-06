# include <stdio.h>

int main(){
	int n1 = 0, n2 = 0;
	
	while(1){
		scanf("%i", &n1);
		scanf("%i", &n2);
		
		if( n1 == n2 )
			break;
		
		if( n1 > n2 )
			printf("Decrescente\n");
		
		if( n2 > n1 )
			printf("Crescente\n");
	}
	
	return 0;
}
