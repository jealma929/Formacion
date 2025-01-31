#include<stdio.h>

int main(void) 
{   
 	int i,num, num_n,num_1, num_2;
	printf("Introduce el numero de terminos ");
    scanf("%d",&num);
    
    printf("\nLa serie de Fibonacci de %d elementos es: \n",num);
    
    for (i=1;i<=num;i++)
    {
        if (i<3)
        {
            if (i=1)
            {
                num_2=0;
                printf(" %d ",num_2);
            }
            if (i=2)
            {
                num_1=1;
                printf(" %d ",num_1);
            }
        }
        else
            {
             num_n=num_2+num_1;
             num_2=num_1;
             num_1=num_n;
             printf (" %d ",num_n); 
            }    
    }
    return (0);
}
