#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// Juego de dados
// Utilizamos la funcion rand para obtener un numero aleatorio en un rango determinado
// Utilizamos la funcion srand para reiniciar la funcion rand con el tiempo del sistema
int main(void)
{
    srand(time(NULL));
    int dado1,dado2,cont1,cont2, tirada, pausa;
    dado1=0; dado2=0;cont1=0,cont2=0;tirada=0;
    do 
    {
        if (dado1!=6)
        {
            dado1=rand() % 6+1;
            cont1++;    
        }
        if (dado2!=6)
        {
            dado2=rand() % 6+1;
            cont1++;    
        }
        tirada++;
        printf("\n tirada %d       dado1 %d         dado2 %d ",tirada,dado1,dado2);
        scanf("%d",&pausa);
    } 
    while (tirada!=12||(dado1!=6 && dado2!=6));
    if (dado1==6 && dado2==6)
        {
            printf("\n Han hecho falta %d intentos en el primer dado y %d intentos en el segundo",dado1,dado2);
        }  
            else
                {
                    printf("\n Despues de %d intentos en el primer dado y %d intentos en el segundo no se han conseguido dos seis",cont1,cont2);                
                } 
    return 0;
}
