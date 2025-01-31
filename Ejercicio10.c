#include <stdio.h>

int main(void)
{
    int cant,desc,codigo;
    float precio,total,descuento, iva, final;
   
    /* code */
   
   

    printf("\nIntroduce \e[1m Codigo del producto \e[m ");
    scanf("%d",&codigo);
    printf("\nIntroduce \e[1m Precio del producto \e[m ");
    scanf("%f",&precio);
    printf("\nIntroduce \e[1m Cantidad \e[m            ");
    scanf("%d",&cant);
    printf("\nIntroduce \e[1m Descuento aplicable \e[m ");
    scanf("%d",&desc);
    total=cant*precio;
    descuento=total*(float)desc/100;
    iva=(total-descuento)*.016;
    final=total-descuento+iva;

         //   123456789 123456789 123456789 1234567890
    printf("\n        \e[1m----RAZA----\e[m        ");
    printf("\n");
    printf("\n%-14d %14.2f", codigo, precio);
    printf("\n%-14d %14.2f", cant, total);
    printf("\n%d %% %24.2f", desc,descuento);
    printf("\n16%% IVA %21.2f", iva);
    printf("\nTOTAL %23.2f", final);
    printf("\n\n");
    return 0;
}