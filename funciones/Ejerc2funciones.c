#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int promedionum(int *ltabla,int ltam,int lnum)
{
    int i=1,lnum=0,lcont=0;
    float lprom=0;
    for (i=0;i!=ltam;i++ )
        if (lnum<ltabla[i]){lprom=lprom+ltabla[i];}

    lprom=lprom/lcont;
    return(lprom);
}


int main(void)
{
    srand(time(NULL));
    int tabla[10];
    int i,num=0;
    float prom;
   
    for (i=0;i<10;i++)
    {
        tabla[i]=0+rand()%19;
        printf("%d ",tabla[i]);
    }
    printf("\nDame el numero de referencia (0-20)");
    scanf("%d",num);
    prom=promedionum (tabla,10,num);
    
    printf("\nEl promedio de los numeros mayor a %d es %f",num,prom);

    return 0;