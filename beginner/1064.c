# include <stdio.h>

int main(){
	
	float n1, n2, n3, n4, n5, n6;
	int x = 0;
	float avg = 0;
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	scanf("%f", &n4);
	scanf("%f", &n5);
	scanf("%f", &n6);

	if(n1 > 0){
		x++;
		avg += n1;
	}
	
	if(n2 > 0){
		x++;
		avg += n2;
	}
	
	if(n3 > 0){
		x++;
		avg += n3;
	}

	if(n4 > 0){
		x++;
		avg += n4;
	}

	if(n5 > 0){
		x++;
		avg += n5;
	}

	if(n6 > 0){
		x++;
		avg += n6;
	}
	
	printf("%i valores positivos\n", x);
	printf("%.1f\n", avg/x);
	
	return 0;
}
