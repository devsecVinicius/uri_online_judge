# include <stdio.h>

int processando(soma, z, aux, i);

int main(){

    int x, z, aux, soma, i;

    scanf("%i", &x);

    z = x - 1;

    while( z <= x ){
        scanf("%i", &z);
    }

    aux = x + 1;
    soma = aux;
    i = 1;

    printf("%i\n", processando(soma, z, aux, i));

    return 0;
}

int processando(soma, z, aux, i){
    if( soma < z ){
        soma = soma + aux;
        ++aux;
        ++i;
        processando(soma, z, aux, i);
    }else{
        return i;
    }
}