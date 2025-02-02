#include <stdio.h>
//indica que numero es mayor entre dos introducidos por teclado
int main(void)
{
    int num1;
    printf("\nTeclee un numero estre 1 y 99 ");
    scanf("%d",&num1);
    if (num1<10)
    {
        printf("\nEl numero %d tiene UN digito",num1);
    }
    else
    {
        printf("\nEl numero %d tiene DOS digitos",num1);
    }
return 0;
}
