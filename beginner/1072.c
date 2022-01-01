# include <stdio.h>

int main (){
	int i, n, numbers[10000] = {}, in = 0, out = 0;
	
	scanf("%i", &n);
	
	for( i = 0 ; i < n ; ++i)
		scanf("%i", &numbers[i]);
	
	for( i = 0 ; i < n ; ++i ){
		if(numbers[i] >= 10 && numbers[i] <= 20)
			++in;
		else
			++out;
	}
	
	printf("%i in\n", in);
	printf("%i out\n", out);
	
	return 0;
}
