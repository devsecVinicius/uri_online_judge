# include <stdio.h>

int main (){

    int a,b,c, maiorAB;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    maiorAB = (a+b+abs(a-b)) / 2;

    maiorAB = (maiorAB+c+abs(maiorAB-c)) / 2;

    printf("%i eh o maior\n", maiorAB);

    return 0;
}