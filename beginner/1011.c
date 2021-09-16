# include <stdio.h>
# include <math.h>

int main(){
	
	float r;
	scanf("%f", &r);
	
	double pi = 3.14159;
		
	double volume = (4.0/3.0) * pi * pow(r, 3);
	
	printf("VOLUME = %.3lf\n", volume);
	
	return 0;
}
