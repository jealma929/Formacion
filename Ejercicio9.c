#include <stdio.h>

int main(void)
{
    int a, b, c, a1, b1,c1;
    float x, y;
    /* code */

    printf("\nIntroduce \e[1m a \e[m de la 2a. ecuacion ax+by=c ");
    scanf("%d\n",&a1);
    printf("\nIntroduce \e[1m b \e[m de la 1a. ecuacion ax+by=c ");
    scanf("%d\n",&b);
    printf("\nIntroduce \e[1m c \e[m de la 1a. ecuacion ax+by=c ");
    scanf("%d\n",&c);
    printf("\nIntroduce \e[1m a \e[m de la 2a. ecuacion ax+by=c ");
    scanf("%d\n",&a1);
    printf("\nIntroduce \e[1m b \e[m de la 2a. ecuacion ax+by=c ");
    scanf("%d\n",&b1);
    printf("\nIntroduce \e[1m c \e[m de la 2a. ecuacion ax+by=c ");
    scanf("%d\n",&c1);

    y=(float) (((a1*c)-(a*c1))/((a1*b)-(a*b1)));
    x=(float) (c-(b*y))/a;

    printf("\n La solucione al sistema de ecuaciones es \n");
    printf("\e[1m x \e[m = %.5f\n",x);
    printf("\e[1m y \e[m = %.5f",y); 
    return 0;
}