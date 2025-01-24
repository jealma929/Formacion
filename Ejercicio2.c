#include <stdio.h>

int main(void)
{
   int num, per;
   printf ("Introduce el lado del cuadrado ", &num);
   per=num*4;
   printf ("El perimetro de un cuadrado de lado ", num, " es ",per);
   return 0;
}
