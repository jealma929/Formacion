#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int mayor(int tabla,int t)
{
    int *p,*i,m;
    do
    {
        if (tabla[i]<tabla[i+1]){p=&tabla[i+1];}
        else {p=&tabla[i];}
        i=i++;
    }
    while(i==p);
    return (*p);
}


int main(void)
{
    srand(time(NULL));
    int tabla[10];
    int i, *max;

    for (i=0;i<10;i++)
    {
        tabla[i]=0+rand()%19;
        printf("%d ",tabla[i]);
    }
    
    *max=mayor(tabla,10);
    printf("\nEl numero mayor es &d",*max);

    return 0;
}


