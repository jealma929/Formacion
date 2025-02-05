#include <stdio.h>
#include <math.h>

int main(void)
{
    int time,var1,horas,minutos,segundos;
    /* code */
    printf("Introduce el tiempo ");
    scanf("%d",&time);
    horas=fabs(time/3600);
    minutos=fabs((time-(horas*3600))/60);
    printf("\n%d %d %d \n",time,horas, minutos);
    segundos=time-(horas*3600)-(minutos*60);

    printf("%d horas %d minutos %d segundos",horas, minutos, segundos);
    return (0);
}