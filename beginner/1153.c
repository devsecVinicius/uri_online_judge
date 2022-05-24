# include <stdio.h>

int main(){

    int n, fatorial;

    scanf("%i", &n);
    fatorial = n;
    n--;

    for ( ; n > 0 ; n-- )
    {
        fatorial = fatorial * n;
    }
    
    printf("%i\n", fatorial);

    return 0;
}