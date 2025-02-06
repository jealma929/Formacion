#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
int mayornum(int *tabla,int t)
{
    int i=0,m=0;
    printf("\n");
        do
    {
        if (tabla[i]<tabla[i+1]){m=tabla[i+1];}
        else {m=tabla[i];}
        i++;
        printf("%d ",m);
    }
    while(i!=t);
    return(m);

}*/

void mayor(int *tabla,int t,int **p)
{
    int i=0;
    int *m;
    m=*p;
        do
        {
            if (tabla[i]<tabla[i+1]){m=&tabla[i+1];}
            else {m=&tabla[i];}  
            i++;
            printf("\n");
            printf("%d, ",m);
        }
        while(i!=t);
   *p=m;
}


int main(void)
{
    srand(time(NULL));
    int tabla[10];
    int i,m; 
    int *max;
    max=tabla;

    for (i=0;i<10;i++)
    {
        tabla[i]=0+rand()%19;
        printf("%d ",tabla[i]);
    }
    //m=mayornum (tabla,10);

    mayor(tabla,10,&max);

    printf("\nEl numero mayor es %d  %d",m,*max);

    return 0;
}