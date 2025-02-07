#include<stdio.h>

int main(void)
{
    int num1, num2,num3, paso;
    paso=0;
    
    printf("\nDame el primer numero ");
    scanf("%d",&num1);
    printf("\nDame el segundo numero ");
    scanf("%d",&num2);
    printf("\nDame el tercer numero ");
    scanf("%d",&num3);

    if (num1>num2 && num2>num3)
    {
        printf("\nSe han introducido de forma decreciente");
    }
    else
        {
            printf("\nSe han introducido de forma aleatoria");
        }
    
    return 0;

}