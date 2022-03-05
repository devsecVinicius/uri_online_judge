# include <stdio.h>

int main(){

    int x, y;

    scanf("%i", &x);
    scanf("%i", &y);

    int i = 1, j = 0;

    while( i < y ){
        j = 0;

        while( j < x ){
            if( !(j == x-1) ){
                printf("%i ", i);
            }else{
                printf("%i", i);
            }
            ++j;
            ++i;
        }

        printf("\n");
    }

    return 0;
}