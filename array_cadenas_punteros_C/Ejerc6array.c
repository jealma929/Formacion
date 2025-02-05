#include<stdio.h>

int main(void)
{

    int year[12];
    int i,*p;
    p=year;
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
                                    *p=28;
                                }
                        } 
                }
                
                

        }
    for (i=0;i<12;i++)
        {
            p=&year[i];
            printf("\nEl mes %d tiene %d dias.",i+1,*p);
        }
return 0;
}
