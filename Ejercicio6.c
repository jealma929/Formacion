#include <stdio.h>
#include <math.h>

int main(void)
{
   int n50,n20,n10,n05;
   float num;
   printf("\n Intruduce el importe a devolver \n");
   scanf("%f",&num);
   num=num*100;
   /*comparamos grupos*/
   n50=fabs(num/50);
   n20=fabs((num-(n50*50))/20);
   n10=fabs((n20-(n20*20))/10);
   n05=fabs((n10-(n10*10))/5);
   /*imprimimos*/   
   printf("\n%d monedas de 50\n",n50);
   printf("%d monedas de 20\n",n20);
   printf("%d monedas de 10\n",n10);
   printf("%d monedas de  5\n",n05);
   return 0;
}   