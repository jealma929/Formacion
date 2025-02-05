#include<stdio.h>

int main(void)
{
    int num;
    
    printf("\n\nFuncion switch");
    printf("\nDame un numero ");
    scanf("%d",&num);
    switch (num)
    {
        case 1: printf(" es LUNES");break;
        case 2: printf(" es MARTES");break;
        case 3: printf(" es MIERCOLES");break;
        case 4: printf(" es JUEVES");break;
        case 5: printf(" es VIERNES");break;
        case 6: printf(" es SABADO");break;
        case 7: printf(" es DOMINGO");break;
        default: printf("\nNumero erroneo");
    }

 
    printf("\n\nFuncion if else");
    printf("\nDame un numero ");
    scanf("%d",&num);
    if (0<num && num<8)
    {
    if (num==1)
        {printf(" es LUNES");}
    if(num==2)
        {printf(" es MARTES");}
    if (num==3)
        {printf(" es MIERCOLES");}
    if (num==4)
        {printf(" es JUEVES");}
    if (num==5)
        {printf(" es VIERNES");}
    if (num==6)
        {printf(" es SABADO");}
    if (num==7)
        {printf(" es DOMINGO");}
    }
    else
        {printf("\nNumero erroneo");}
    
    return 0;
}
