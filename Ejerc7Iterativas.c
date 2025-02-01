#include<stdio.h>
// escribe la tabla de multiplicar
int main(void)
{
    int i, cant;
    i=1;
    do 
    {
        printf("\nIntroduce el numero para hacer la tabla de multipicar ");
        scanf(" %d",&cant);
        if (cant<0 || cant>10)
            {
                printf("El numero introducido es erroneo");
            }
    } 
    while (cant<0 || cant>10);
    printf("\nLa tabla de multiplicar del numero %d es \n",cant);
    for (i=1;i<=10;i++)
    {
        //prod=num*i;
        printf("%d x %d = %d\n",cant,i,cant*i);
    }
    return 0;
}
