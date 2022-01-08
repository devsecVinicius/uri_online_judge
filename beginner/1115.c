# include <stdio.h>

int main(){
	
	int x = 0, y = 0;
	
	while(1){
		scanf("%i", &x);
		scanf("%i", &y);
		
		if( x > 0 && y > 0 )
			printf("primeiro\n");
		if( x < 0 && y > 0 )
			printf("segundo\n");
		if( x < 0 && y < 0 )
			printf("terceiro\n");
		if( x > 0 && y < 0 )
			printf("quarto\n");
		if( x == 0 || y == 0 )
			break;
	}
	
	return 0;
}
