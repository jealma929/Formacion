#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int mayornum(int *tabla,int t)
{
    int i=1,num=0;
    num=tabla[0];
    //printf("\n");
    do
        {
            if (num<tabla[i]){num=tabla[i];}
            i++;
            //printf("%d ",num);
        }
    while(i!=t);
    return(num);
}

void mayor(int *tabla,int t,int **p)
{
    int i=1, num;
    int *m=&tabla[0];

    num=tabla[0];
    //printf("\n");
        do
        {
            if (num<tabla[i]){m=&tabla[i];num=tabla[i];}
            i++;
            //printf("%d-%d-%d  ",i,tabla[i],num);
        }
        while(i!=t);
   *p=m;
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
        tabla[i]=0+rand()%19;
        printf("%d ",tabla[i]);
    }
    may=mayornum(tabla,10);

    mayor(tabla,10,&max);
    
    printf("\nEl numero mayor es %d  %d",may,*max);

    return 0;
}