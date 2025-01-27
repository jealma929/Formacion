#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, sum, prod;
    /* code */
    printf("Introduce cuatro numeros\n");
    scanf("\n%d\n%d\n%d\n%d",&n1,&n2,&n3,&n4);
    sum=n1+n2;
    prod=n3*n4;
    printf("\nla suma de todos los numeros es %d", sum);
    printf("\nel promedio de los numeros es %d", prod);
    return 0;
}