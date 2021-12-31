# include <stdio.h>

int main(){
	int x, i = 0;
	scanf("%i", &x);
	
	while( i != 6){
		if( x % 2 == 1){
			printf("%i\n", x);
			i++;
		}
		x++;
	}
	
	return 0;
}
