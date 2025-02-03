#include<stdio.h>

int main(void)
{
int ncaracter,error;
error=0;
char caracter;
printf("\nIntroduce un caracter ");
scanf("%c",&caracter);
//asignamos el valor ascii del caracter a una variable
ncaracter=(int)caracter;
//preguntamos si el caracter esta dentro de los diferentes grupos
if((ncaracter>64 && ncaracter<91)||(ncaracter>96 && ncaracter<123))
    {
        error++;
        printf("El caracter es ALFABETICO");
    }
if(ncaracter>47 && ncaracter<58)
    {
        error++;
        printf("El caracter es NUMERICO");
    }
if(ncaracter==44||ncaracter==46||ncaracter==58||ncaracter==59)
    {
        error++;
        printf("El caracter es UN SIGNO DE PUNTUACION");
    }
//mensaje de error al no estar en ningun grupo 
if (error==0)
    {
        printf("El caracter es DESCONOCIDO");
    }

return(0);

}