#include <stdio.h>

int main(void)
{
    float prec, prod;
    int cant;
    /* code */
    printf("Introduce el precio ");
    scanf("%f",&prec);
    printf("\nIntroduce la cantidad ");
    scanf("%d",&cant);
    prod=prec*cant;
    printf("\nel importe total de %d unidades a %f es %f", cant, prec, prod);
    return 0;
}