#include<stdio.h>
#include<math.h>
// conversor de decimal a hexadecimal o binario
int main(void)
{
    int i, num, cont, base, exp;
    char opcion;
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
    printf("\n Convertir el numero %d a Binario pulsa     B \n",num);
    printf("\n Convertir en numero %d a Hexadecimal pulsa H \n",num);
    printf("\n Para acabar pulsa X");
    scanf("%c",&opcion);
    switch (opcion)
    {
        case 'B':
           { base=2;
            break;}
        case 'H':
           { base=16;
            break;}
        case 'X':
            break;
    }
    //comprobamos la potencia limite de la base
    while (num>pow(base,i))
    {
        i++;
        cont++;
    }
    printf("\n %d  %d %d %d %d \n",i,cont, num, base, pow(base,i));
    for (i=cont;i<0;i--)
    {
        exp=pow(base,i);
        printf("\n %d  %d \n",i,exp);
        printf(" %d ",num%exp);    
    }
    return 0;
}