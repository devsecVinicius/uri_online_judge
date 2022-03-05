# include <stdio.h>
# include <math.h>

int main(){

    double n, i = 1;

    scanf("%lf", &n);

    for( ; i <= n ; ++i ){
        printf("%.0f %.0f %.0f\n", i, pow(i,2), pow(i,3) );
        printf("%.0f %.0f %.0f\n", i, (pow(i,2)+1), (pow(i,3)+1) );
    }


    return 0;
}