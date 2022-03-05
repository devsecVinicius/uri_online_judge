# include <stdio.h>

int main(){

    int n, i = 1;

    while( n != 0 ){
        
        scanf("%i", &n);
        i = 1;
        
        while( i <= n ){
            if( i == n ){
                printf("%i", i);
            }else{
                printf("%i ", i);
            }
            ++i;
        }

        if( !( n == 0 ) ){
            printf("\n");
        }

    }
    return 0;
}