#include <stdio.h>

int main(void)
{

    char letra;

    printf("\nIntroduce un caracter ");
    letra=getchar();
    if (letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u')
        {
            printf("\nEl caracter es una vocal");
        }
        else 
        {
            printf("\nEl caraceter no es una vocal");
        }
}