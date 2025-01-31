#include <stdio.h>
//tomamos un numero no primo y muestra el meno divisor

int main(void) 
{   
 	int i;
    i=0;
    //Imprimimos con Do-->While
    printf("\nImprimimos del 1-100 con Do--While\n");
    do
    {
        i++;
        printf("%d ",i);
    } 
    while (i<100);

    i=0;
    //Imprimimos con While -->Do
    printf("\n\nImprimimos del 1-100 con Do--While\n");
    while (i<100)
    {
        i++;
        printf("%d ",i);
    }

        i=0;
    //Imprimimos con For
    printf("\n\nImprimimos del 1-100 con For\n");
    for (i=1;i<=100;i++)
    {
        printf("%d ",i);
    } 
    
    return 0;
}