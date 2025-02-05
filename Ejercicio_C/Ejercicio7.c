#include <stdio.h>

int main(void)
{
    float plimon, pnaranja, pcola;
    int limon, cola, naranja;
    /* code */
    printf("\nIntroduce las ventas de Cola    ");
    scanf("%d",&cola);
    pcola=cola*0.1;
    printf("\nIntroduce las ventas de Naranja ");
    scanf("%d",&naranja);
    pnaranja=naranja*0.20;
    printf("\nIntroduce las ventas de Limon   ");
    scanf("%d",&limon);
    plimon=limon*0.19;
    /* imprimimos el informe*/
    printf("\n \n");
    printf("Producto      Ventas     Precio         Total\n");
    /*      1234567890123456789012345678901234567890123456789*/
    printf("---------------------------------------------\n");
    printf("Cola       %9.7s     0.17          %7.2f\n",cola, pcola);
    printf("Naranja12345%7d       0.20          %7.2f\n",naranja,pnaranja);
    printf("Limon1234567%7d       0.19          %7.2f\n",limon,plimon);
    printf("                               TOTAL         %7.2f\n",plimon+pnaranja+pcola);
    return 0;
}