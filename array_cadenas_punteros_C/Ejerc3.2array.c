#include<stdio.h>
#include<string.h>

int main(void)
{

int i,j,largo;
char cadena [30];
printf("\nIntroduce una cadena de caracteres\n");
for (i=0;i<30;i++)
    {
    cadena[i]=getchar();
    if((int)cadena[i]==10)
        {
            cadena[i]='\0';
            i=31;
        }
    }
largo=strlen(cadena);
printf("\nLa longitud de la cadena es de %d caracteres",largo);
printf("\nLa cadena al reves es :");

for (i=0;i<largo;i++)
    {
        j=largo-1-i;
        printf("%c",cadena[j]);
    }


}