#include <stdio.h>

int main(void)
{
   int num, per;
   printf("\n Introduce el lado del cuadrado \n");
   scanf("%d",&num);
   per=num*4;
   printf("\n El perimetro de un cuadrado de lado %d es %d \n",num,per);
   return 0;
}   