# include <stdio.h>

int main(){

	int n,x, sum_divisors;
	scanf("%i", &n);

	for(int i = 0 ; i < n ; ++i){
		
		scanf("%i", &x);


		if(x%2 != 0){
			printf("%i nao eh perfeito\n", x);
		}else{
			sum_divisors = 0;
			for(int j = 1 ; j < x ; ++j){
				if(x%j == 0){
					sum_divisors = sum_divisors + j;
				}
			}
			if(sum_divisors == x){
				printf("%i eh perfeito\n", x);
			}else{
				printf("%i nao eh perfeito\n", x);
			}
		}
	


	}



	return 0;
}
