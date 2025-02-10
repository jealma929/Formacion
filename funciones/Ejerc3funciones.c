#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void intercambio(int *tabla,int t)
{
    int num=0;
    num=tabla[0];
    tabla[0]=tabla[1];
    tabla[1]=num;
    num=tabla[0];
}

int main(void)
{
   
    srand(time(NULL));
    int tabla[2],x,y;
    int i;

    tabla[0]=0+rand()%49;x=tabla[0];
    tabla[1]=0+rand()%49;y=tabla[1];
    printf("x=%d     y=%d ",tabla[0],tabla[1]);

    intercambio(tabla,2);
    
    printf("\nx=%d     y=%d ",tabla[0],tabla[1]);
    return 0;
}