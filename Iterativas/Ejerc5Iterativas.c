#include<stdio.h>
//indicamos cuantas notas son mayores de 7 con una muestra de 10

int main(void) 
{   
 	int i, mayor, menor;
    float nota;
    for (i=1;i<10;i++);
        {
            do
            {
            printf("\nIntroduce la nota del alumno %d maximo dos decimales ",i);
            scanf("%f",&nota);
            if (0>nota || nota>10)
                {
                    printf ("Nota erronea, vuelva a introducirla");
                }
            }
            while (0>nota || nota>10);
            if (nota<7)
                menor++;
            else    
                mayor++;
        }
    printf("%d notas son mayores de 7 y %d son menores", mayor,menor);

    return 0;
}