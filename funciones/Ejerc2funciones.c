#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void mayornum(int numc,int *tabla,int t)
{
    int i,cont=0;
    float promed=0;
        for(i=0;i!=t;i++)
        {
            if (numc<tabla[i])
            {           
                promed=promed+tabla[i];
                cont=cont+1;
             }
        }
    promed=(float)(promed/cont);        
    printf("\nEl promedio de los numeros mayores de %d es %.2f ",numc,promed);
}



int main(void)
{
    srand(time(NULL));
    int tabla[10];
    int i;
    int num,numc=0; 
    num=10;
        
    for (i=0;i<10;i++)
    {
        tabla[i]=0+rand()%49;
        printf("%d ",tabla[i]);
    }
    
    printf("\nIntroduce el numero de corte ");
    scanf("%d",&numc);
   
    mayornum(numc,tabla,num);
    
       return 0;
}