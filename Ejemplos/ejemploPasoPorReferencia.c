#include <stdio.h>
void Alfa(int *val,float pos)
//le pasamos una variable float y un puntero
{
    *val=5;
    pos=7.7;//la variable pos pertenece al ambito de la funcion
    return;
}
void Beta(int val,float *pos)
{
    val=10;
    *pos=14.7;
}

int main(void)
{
    int a=6;
    float b=9.87;
    printf("Al principio valen a=%d b=%f\n",a,b);//escribe 6 y 9.87
    Alfa(&a,b);//se modifica a porque es un paso por referencia
    printf("Despues de Alfa valen a=%d b=%f\n",a,b);//escribe 5 y 9.87
    Beta(a,&b);//se modifica la variable b
    printf("Después de Beta valen a=%d b=%f\n",a,b);//escribe 5 y 14.7
    return 0;
}