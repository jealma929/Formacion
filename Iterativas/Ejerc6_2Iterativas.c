#include<stdio.h>
// escribe los multiplos de 3 entre el 1 y un numero dado
int main(void)
{
    int i, num,cant;
    i=1;
    do 
    {
        printf("\nIntroduce el limite de los multiplos ");
        scanf(" %d",&cant);
        if (cant<0)
            {
                printf("El numero introducido es erroneo");
            }
    } 
    while (cant<0);
    printf("\nLos multiplos de 3 entre 1 y %d son: \n",cant);
    do
    {
    num=i*3;
    printf("%d ",num);
    i++;
    } while (i*3<=cant);
    return 0;
}
