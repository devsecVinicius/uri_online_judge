# include <stdio.h>

int main(){

    double n, soma = 0, quantidade_de_inputs = 0;
    double resultado;

    while(1)
    {
        scanf("%lf", &n);
        if( n <= 0)
        {
            break;
        }
        
        soma += n;
        quantidade_de_inputs++;

    }
    resultado = soma/quantidade_de_inputs;

    printf("%.2f\n", resultado);

    return 0;
}