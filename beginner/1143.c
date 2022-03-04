# include <stdio.h>
# include <math.h>

int main(){
    double n, i;
    n = i = 0;

    scanf("%lf", &n);

    i = i + 1;

    while( i <= n ){
        printf("%.0f %.0f %.0f\n", i, pow(i,2), pow(i,3) );
        i = i + 1;
    }

    return 0;
}