#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void mayornum(int *tabla,int t)
{
    int i=1,num=0;
    num=tabla[0];

    for(i=1;i!=t;i++)
        {
            if (num<tabla[i]){num=tabla[i];}
        }
    
    printf("\nEl numero mayor es %d ",num);
}



int main(void)
{
    srand(time(NULL));
    int tabla[10];
    int i,may=0; 
    int *max;
    max=tabla;

    for (i=0;i<10;i++)
    {
        tabla[i]=0+rand()%49;
        printf("%d ",tabla[i]);
    }
    mayornum(tabla,10);
    
   

    return 0;
}