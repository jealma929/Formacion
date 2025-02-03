#include<stdio.h>

int main(void)
{
    int num1, num2,num3, paso;
    
    printf("\nDame el primer numero ");
    scanf("%d",&num1);
    printf("\nDame el segundo numero ");
    scanf("%d",&num2);
    printf("\nDame el tercer numero ");
    scanf("%d",&num3);

    if (num1<num2)
        {
            paso=num2;
            num2=num1;
            num1=paso;
        }
    if(num3>num1)
        {
            paso=num3;
            num3=num1;
            num1=paso;
        }      
    if(num3>num2)
        {
            paso=num3;
            num3=num2;
            num2=paso;
        }
          

    if (num1==num2 || num1==num3 ||num2==num3)
    {
        printf("\n %d %d %d ",num1,num2,num3);
    }
    else 
    {
        printf("\n %d",num1);
        printf("\n %d",num2);
        printf("\n %d",num3);
    }
    return 0;

}
