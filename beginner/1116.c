# include <stdio.h>

int main(){
	
	int n = 0;
	
	scanf("%i", &n);
	int i = 0;
	
	float x,y;
	for(i =0 ; i < n ; ++i ){
		scanf("%f", &x);
		scanf("%f", &y);
		
		if(y == 0)
			printf("divisao impossivel\n");
		else
			printf("%.1f\n", (x/y) );
	}
	
	return 0;
}
