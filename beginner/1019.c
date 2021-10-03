# include <stdio.h>

int main(){
	
	int n = 0 ;
	
	scanf("%i", &n);
	
	int horas = (n / 60) / 60 ;
	int minutos = (n / 60) % 60 ;
	int segundos = (n % 60) % 60 ;
	
	printf("%i", horas);
	printf(":%i:", minutos);
	printf("%i\n", segundos);
		
	return 0;
}
