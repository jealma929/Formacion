#include<stdio.h>
#include<math.h>
// conversor de decimal a hexadecimal o binario
int main(void)
{
    int i, num, cont, base, exp;
    int opcion;
    i=0;cont=0;
    // introducimos un numero
    do
    { 
        printf("Introduce el numero a convertir ");
        scanf("%d",&num);
        if (num<0)
            {            
                printf("/nEl numero introducido es erroneo");
            }
    }
    while (num<0);
    //Hacemos el menu de seleccion
    do
    {
    printf("\n Convertir el numero %d a Binario pulsa     1 \n",num);
    printf("\n Convertir en numero %d a Hexadecimal pulsa 2 \n",num);
    printf("\n Para acabar pulsa 3");
    scanf("%d",&opcion);
        if (opcion==1)
        {
            base=2;
        }
    if (opcion==2)
        {
            base=16;
        }
    }
    while (opcion==3);
    //comprobamos la potencia limite de la base
    do
    {
        i++;
        cont++;
        printf("\n%d  %d",i,cont);
    }
    while (num>pow(base,i))
    printf("\n %d  %d %d %d %d \n",i,cont, num, base, pow(base,i));
    for (i=cont;i<0;i--)
    {
        exp=pow(base,i);
        printf("\n %d  %d \n",i,exp);
        printf(" %d ",num%exp);    
    }
    return 0;
}