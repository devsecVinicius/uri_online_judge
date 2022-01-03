# include <stdio.h>

int main(){
	float i = 0, j = 1;
	
	while( i < 2 ){
		if( i == 0 || i == 1 ){
			printf("I=%.0f J=%.0f\n", i, j );
			printf("I=%.0f J=%.0f\n", i, j + 1);
			printf("I=%.0f J=%.0f\n", i, j + 2);
		}else{
			printf("I=%.1f J=%.1f\n", i, j );
			printf("I=%.1f J=%.1f\n", i, j + 1);
			printf("I=%.1f J=%.1f\n", i, j + 2);
		}
		i += 0.2;
		j += 0.2;
	}
	printf("I=%.0f J=%.0f\n", i, j );
	printf("I=%.0f J=%.0f\n", i, j + 1);
	printf("I=%.0f J=%.0f\n", i, j + 2);
	
	return 0;
}
