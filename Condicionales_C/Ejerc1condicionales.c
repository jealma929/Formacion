#include <stdio.h>

int main(void)
{
    int sueldo;
    printf("Teclee su sueldo \n");
    scanf("%d",&sueldo);
    if (sueldo>3000)
    {
        printf("\nDEBE DE PAGAR IMPUESTOS");
    }
    else
    {
        printf("\nNO DEBE DE PAGAR IMPUESTOS");
    }
return 0;
}
