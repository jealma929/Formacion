#include <stdio.h>

void main()
{
int a,b,c, *p1,*p2;
//reserva memoria para las variables entero  y dos variables punteros apuntando null
p1=&a;//p1 apunta a la direcciond de a
*p1=1; // asignamos el valor 1 a la posicion donde apunta *p1
p2=&b;
*p2=2;
p1=p2; //apuntamos p1 a la posicion que apunta p2
*p1=0; //asigna el valor cero a b
p2=&c;
*p2=3;
printf("\n%d %d %d ",a,b,c);//prinf(1,0,3)
p1=p2;
p2=&a;//p2 apunta a la direccion de a
*p2=*p1;
printf("\n%d %d %d ",a,b,c);//print(3,0,3)
}