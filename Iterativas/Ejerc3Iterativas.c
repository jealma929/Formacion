#include<stdio.h>
//tomamos un numero no primo y muestra el meno divisor

int main(void) 
{   
 	int i,divisor,num;
      do
    {
       	divisor=0;
        printf("\nIntroduce el numero ");
        scanf("%d",&num);

        for (i=2;i<num;i++)
            {
                if (num%i==0)
                    {
                        divisor=i;
                        printf("\nEl menor divisor de %d es %d ",num, i);
                        i=num;
                    }
            }
        if (divisor==0)
            {
                printf("\nEl numero que has introducido es primo");
            }
    } 
    while (divisor==0);
    
    return 0;
}