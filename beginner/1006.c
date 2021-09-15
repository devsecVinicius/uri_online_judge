# include <stdio.h>

int main()
{
	float a,b,c;
	
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	a = a * 2;
	b = b * 3;
	c = c * 5;
	
	float media = (a+b+c) / (2+3+5);
	
	printf("MEDIA = %.1lf\n", media);

	return 0;
}
