#include <stdio.h>

int main()
{
char *cadena="hola mundo";
// declaramos un puntero a caracteres y la inicializamos con una cadena
char *p;
//declaramos un puntero que al definirla apunta a null
//podemos usar un puntero para movernos por la cadena
int i;
p=cadena+1;
// como cadena apuntaba a la posicion 0 ahora apunta a 1 (o)
for (i=0;i<5;i++)
    {
    printf("%c",*p);   
 //como p se aumenta de dos en dos imprime
 //i=0 --> "o"
 //i=1 --> "a"
 //i=2 --> "m"
 //i=3 --> "n"
 //i=4 --> "o"
    p+=2;
    }
printf("\n");                             
}