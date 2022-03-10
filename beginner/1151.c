# include <stdio.h>

void print_N_Fibonacci_Numbers(n, ultimo, penultimo, aux);

int i = 2;

int main(){

    int n, penultimo, ultimo, aux;

    scanf("%i", &n);

    printf("0 1 ");
    print_N_Fibonacci_Numbers(n,1,0, aux);

    return 0;
}

void print_N_Fibonacci_Numbers(n, ultimo, penultimo, aux){
    aux = ultimo + penultimo;
    penultimo = ultimo;
    ultimo = aux;
    ++i;
    if( i <= n ){
        if( i == n ){
            printf("%i", aux);
        }else{
            printf("%i ", aux);
        }
        print_N_Fibonacci_Numbers(n, ultimo, penultimo, aux);
    }else{
        printf("\n");
    }
}