#include<stdio.h>
#include<string.h>

int main(void)
{

int i,j,largo;
char cadena []="alberto";

/*printf("\nIntroduce una cadena de caracteres\n");
scanf("%s",cadena);*/
largo=strlen(cadena);
printf("\nLa longitud de la cadena es de %d caracteres",largo);
printf("\nLa cadena al reves es :");

for (i=0;i<largo;i++)
    {
        j=largo-1-i;
        printf("%c",cadena[j]);
    }


}