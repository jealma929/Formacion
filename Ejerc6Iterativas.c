#include<stdio.h>
// escribe los multiplos de 3 emtre el 1-50
int main(void)
{
    int i;
    i=1;
    do
    {
        printf("\nLos multiplos de 3 entre 1 y 50 son: "\n);
        printf("%d ",i*3);
    } while (i<=50);
    return 0;
}
