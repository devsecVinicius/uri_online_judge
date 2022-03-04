# include <stdio.h>

int main(){
    int n, aux, i;
    n = aux = i = 0;
    aux++;

    scanf("%i", &n);

    while( i < n ){
        printf("%i %i %i PUM\n", aux, aux+1, aux+2);
        aux = aux + 4;
        ++i;
    }

    return 0;
}