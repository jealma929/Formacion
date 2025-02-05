#include<stdio.h>

int main(void)
{

    int year[12];
    int i,bisi,nyear,*p;
//pedimos el año
    printf("\nIntroduce el año ");
    scanf("%d",&nyear);

    if ((nyear%100==0) && (nyear%400==0))
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
// asignamos los datos a la tabla

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
                
 //imprimimos los meses               

        }
    for (i=0;i<12;i++)
        {
            p=&year[i];
            printf("\nEl mes %d tiene %d dias.",i+1,*p);
        }
    return 0;
}
