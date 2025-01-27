#include <stdio.h>

int main(void)
{
   float num,resto,n50,n20,n10,n05;

   printf("\n Intruduce el importe a devolver \n");
   scanf("%f",&num);
   num=num*100;
   printf ("\n%d\n",num);
   n50=num/50;
   resto=num-(50*n50);
   printf("monedas 50 %d %d\n",n50,resto);

   n20=resto/20;
   printf("%d",resto);
   resto=n20-(20*n20);
   printf("monedas 20 %d %d\n",n20 ,resto);
   n10=resto/10;
   resto=n10-(10*n10);
   printf("monedas 10 %d %d\n",n10 ,resto);
   printf("%d", resto);
   n05=resto/0.05;
   
   printf("\n%d monedas de 50\n",n50);
   printf("%d monedas de 20\n",n20);
   printf("%d monedas de 10\n",n10);
   printf("%d monedas de  5\n",n05);
   return 0;
}   