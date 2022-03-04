# include <stdio.h> 

int main(){
    int x, y;

    scanf("%i", &x);
    scanf("%i", &y);

    while( x < y - 1 ){
        x++;
        if( x % 5 == 2 || x % 5 == 3){
            printf("%i\n", x);
        }
    }

    while( y < x - 1 ){
        y++;
        if( y % 5 == 2 || y % 5 == 3){
            printf("%i\n", y);
        }
    }

    return 0;
}