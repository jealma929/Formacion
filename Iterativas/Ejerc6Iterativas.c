#include<stdio.h>
// escribe los multiplos de 3 emtre el 1-50
int main(void)
{
    int i, num;
    i=1;
     printf("\nLos multiplos de 3 entre 1 y 50 son: \n");
    do
    {
    num=i*3;
    printf("%d ",num);
    i++;
    } while (i*3<=50);
    return 0;
}
