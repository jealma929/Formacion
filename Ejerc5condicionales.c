#include <stdio.h>
#include <math.h>
//dado los lados de un triangulo indicar como es
int main(void)
{
    int num1,num2,num3;
    float p, area;
    printf("\nTeclee primer lado  ");
    scanf("%d",&num1);
    printf("\nTeclee segundo lado ");
    scanf("%d",&num2);
    printf("\nTeclee tercer lado  ");
    scanf("%d",&num3);
    if (num1==num2 && num2==num3 && num1==num3)
    {
       printf("\nEl triangulo es equilatero ");
    }
    else
    {
        if (num1==num2 || num2==num3 || num1==num3)
            {
                printf("\nEl triangulo es isosceles");
            } 
        else
            {
                printf("\nEl triangulo de escaleno");
            }
    }
    // formula de Heron para calcular el area de un triangulo
    p=(num1+num2+num3)/2;
    area=sqrt(p*(p-num1)*(p-num2)*(p-num3));
    printf("\nEl area segun la formula de Heron es %.2f",area);
return 0;
}