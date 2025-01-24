#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, sum, prod;
    /* code */
    printf("Introduce cuatro numeros separados por espacios");
    scanf("%d%d",&n1,&n2,&n3,&n4);
    sum=n1+n2;
    prod=n3*n4;
    printf("la suma de todos los numeros es ", sum);
    printf("el promedio de los numeros es ", prod);
    return 0;
}