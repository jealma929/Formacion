#include <stdio.h>
//indica que numero es mayor entre dos introducidos por teclado
int main(void)
{
    int num1,num2;
    printf("\nTeclee primer numero ");
    scanf("%d",&num1);
    printf("\nTeclee segundo numero ");
    scanf("%d",&num2);
    if (num1>num2)
    {
        printf("\nEl numero mayor es %d ",num1);
    }
    else
    {
        printf("\nEl numero mayor es %d ",num2);
    }
return 0;
}

