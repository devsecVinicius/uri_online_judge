# include <stdio.h>

int main(){

    double s = 0, auxiliar = 1;

    while (auxiliar < 100)
    {
        s += 1 / auxiliar;
        auxiliar++;
    }
    
    printf("%.2lf\n", s+0.01); // As vezes não precisamos buscar soluções muito complexas se o simples resolve bem

    return 0;
}