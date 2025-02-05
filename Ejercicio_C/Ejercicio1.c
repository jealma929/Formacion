#include <stdio.h>

int main(void)
{
    int n1, n2, sum, prod;
    /* code */
    printf("\n Introduce dos numeros \n");
    scanf("%d\n%d",&n1,&n2);
    sum=n1+n2;
    prod=n1*n2;
    printf("la suma de %d + %d es %d\n",n1,n2,sum);
    printf("el producto de %d x %d es %d\n",n1,n2,prod);
    return 0;
}