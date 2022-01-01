# include <stdio.h>

int main(){
	int x, y, soma;
	scanf("%i", &x);
	scanf("%i", &y);
	soma = 0;
	
	if(x < y){
		x += 1;
		while(x < y){
			if(x % 2 == 1 || x % 2 == -1)
				soma += x; 
			x += 1;
		}
	}
	
	if(x > y){
		y += 1;
		while(y < x){
			if(y % 2 == 1 || y % 2 == -1){
				soma += y; 
			}
		y += 1;
		}
	}

	
	printf("%i\n", soma);
	
	return 0;
}
