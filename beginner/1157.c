# include <stdio.h>

int main(){

    int n, contador, resultado_da_divisao;

    scanf("%i", &n);
    contador = n;

    int lista_de_divisores[n];
    int i = 0;

    while ( contador > 0 )
    {
        resultado_da_divisao = n % contador;
        if ( resultado_da_divisao == 0 )
        {
            lista_de_divisores[i] = contador;
            i++;
        }

        contador--;
        
    }

    for ( i-- ; i >= 0 ; i-- )
    {
        printf("%i\n", lista_de_divisores[i]);
    }
    

    return 0;
}