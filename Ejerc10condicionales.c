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

    if (num1<num2)
        {
            paso++;
        }     
    if(num2<num3)
        {
            paso++
        }
          

    if (paso==2)
    {
        printf("\nSe han introducido de forma decreciente");
    }
    else 
    {
        printf("\n %d",num1);
        printf("\n %d",num2);
        printf("\n %d",num3);
    }
    return 0;

}