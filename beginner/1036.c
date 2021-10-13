# include <stdio.h>
# include <math.h>

int main(){
	
	double a,b,c;
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	double delta = pow(b,2) - (4*a*c);
	
	double r1 = ((b-(b+b)) + sqrt(delta)) / (2*a) ;
	double r2 = ((b-(b+b)) - sqrt(delta)) / (2*a) ;
	
	if(delta <= 0 || a == 0 || c == 0)
		printf("Impossivel calcular\n");
	else{
		printf("R1 = %.5lf\n", r1);
		printf("R2 = %.5lf\n", r2);
	}
	
	return 0;
}
