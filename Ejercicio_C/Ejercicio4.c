#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, sum;
    float prom;
    /* code */
    printf("\nIntroduce cuatro numeros\n");
    scanf("%d\n%d\n%d\n%d",&n1,&n2,&n3,&n4);
    sum=n1+n2+n3+n4;
    prom=(float)sum/4;
    printf("la suma de %d, %d, %d, %d es %d\n",n1,n2,n3,n4,sum);
    printf("el promedio de %d, %d, %d, %d es %.2f",n1,n2,n3,n4,prom);
    return 0;
}