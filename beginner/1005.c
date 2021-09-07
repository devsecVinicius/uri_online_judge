# include <stdio.h>

int main(){
	
	float a, b;
	
	scanf("%f", &a);
	scanf("%f", &b);
	
	a = a * 3.5;
	b = b * 7.5;
	
	double media = ( a + b ) / ( 3.5 + 7.5 ) ;
	
	printf("MEDIA = %.5lf\n", media);
	
	return 0;
}
