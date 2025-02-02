#include<stdio.h>
#include<math.h>
//prueba switch case
int main(void)
{
    int i, num, cont, base, exp;
    char opcion;
    i=0;cont=0;
    do
    {
    printf("\nmenu");
    printf("\n1 hola");
    printf("\n2 holita");
    printf("\n3 holota");
    printf("\n4 holaza");
    printf("\n5 salir");
    
    printf("\npulse seleccion");
    scanf("%d",&num);
    switch (num)
    {    case 1:
        printf("\n1 hola");break;
    case 2:    
        printf("\n2 holita");break;
    case 3:
        printf("\n3 holota");break;
    case 4:
        printf("\n4 holaza");break;
    case 5:
        break;    
    default:
        printf("Seleccion erronea");
    }
    }
    while (num!=5);

}