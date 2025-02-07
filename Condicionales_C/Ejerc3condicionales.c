#include <stdio.h>
#include <math.h>
//escribe la suma sin num1>num2 y el producto si num1>num2
int main(void)
{
    int num1,num2;
    printf("\nTeclee primer numero ");
    scanf("%d",&num1);
    printf("\nTeclee segundo numero ");
    scanf("%d",&num2);
    if (num1>num2)
    {
        printf("\nLa suma de los dos numeros es       %d ",num1+num2);
        printf("\nLa diferencia de los dos numeros es %d ",num1-num2);
    }
    else
    {
        printf("\nEl producto de los dos numeros es %d ",num1*num2);
        printf("\nLa division de los dos numeros es %.2f ",(float)num1/num2);
    }
return 0;
}
