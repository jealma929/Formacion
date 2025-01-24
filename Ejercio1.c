#include <stdio.h>

int main(void)
{
    int n1, n2, sum, prod;
    /* code */
    printf("Introduce dos numeros");
    scanf("%d%d",&n1,&n2);
    sum=n1+n2;
    prod=n1*n2;
    printf("la suma de ", n1, " + ", n2, " es ", sum);
    printf("el producto de ", n1, " + ", n2, " es ", prod);
    return 0;
}