# include <stdio.h>
# include <math.h>

int main(){
	int n, i;
	
	scanf("%i", &n);
	
	for( i = 0 ; i <= n ; ++i, ++i){
		if( i != 0)
			printf("%i^2 = %.0lf\n", i, pow(i, 2));
	}

	return 0;
}
