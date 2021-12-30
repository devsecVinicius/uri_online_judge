# include <stdio.h>

int main(){
	
	float n1, n2, n3, n4, n5, n6;
	int x = 0;
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	scanf("%f", &n4);
	scanf("%f", &n5);
	scanf("%f", &n6);

	if(n1 > 0)
		x++;

	if(n2 > 0)
		x++;

	if(n3 > 0)
		x++;

	if(n4 > 0)
		x++;

	if(n5 > 0)
		x++;

	if(n6 > 0)
		x++;
	
	printf("%i valores positivos\n", x);
	
	return 0;
}
