# include <stdio.h>

int main(){

    int aux, alcool, gasolina, diesel;
    aux = alcool = gasolina = diesel = 0;

    while(1){
        scanf("%i", &aux);

        if( aux == 1 ){
            alcool++;
        }

        if( aux == 2 ){
            gasolina++;
        }

        if( aux == 3 ){
            diesel++;
        }

        if( aux == 4 ){
            break;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %i\n", alcool);
    printf("Gasolina: %i\n", gasolina);
    printf("Diesel: %i\n", diesel);

    return 0;
}