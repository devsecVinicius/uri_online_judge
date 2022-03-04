# include <stdio.h>

int main(){

    int x, y, sum;
    x = y = sum = 0 ;

    scanf("%i", &x);
    scanf("%i", &y);

    if( x < y ){
        while( x <= y ){
            if( ( x % 13 ) != 0 ){
                sum = sum + x;
            }
            x = x + 1;
        }
    }
    else
        if( y < x ){
            while( y <= x ){
                if( ( y % 13 ) != 0 ){
                    sum = sum + y;
                }
                y = y + 1;
            }
        }

    printf("%i\n", sum);

    return 0;
}