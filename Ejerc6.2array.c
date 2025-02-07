#include<stdio.h>

int main(void)
{

    int year[12];
    int i,bisi,nyear,*p;
    //pedimos el año
    /*printf("\nIntroduce el año ");
    scanf("%d ",&nyear);
    //comprobamos si es bisiesto o no
    printf("%d  %d",nyear%100,nyear%400);
    if (nyear%100==0 && nyear%400==0)
        {
            bisi=29;
        }
        else 
            {
                if (nyear%4==0)
                    {
                        bisi=29;
                    } 
                else
                    {
                        bisi=28;
                    }       
            }
    printf("\n%d ",bisi);
    //cargamos el array con los datos correspondientes a los dias*/
    p=year;bisi=28;
    for (i=1;i<=12;i++)
        {
            if (i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            {
                p=&year[i-1];
                *p=31;
            }
            else
                {
                    if (i==4||i==6||i==9||i==11) 
                    {
                        p=&year[i-1];
                        *p=30;
                    }
                    else
                        {
                            if (i==2) 
                                {
                                    
                                    p=&year[i-1];
                                    *p=bisi;
                                }
                        } 
                }
                
                
        printf("%d",*p);
        }
    //imprimimos la tabla del año
    for (i=0;i<12;i++)
        {
            p=&year[i];
            printf("\nEl mes %d tiene %d dias.",i+1,*p);
        }
return 0;
}
