#include<stdio.h>
// escribe numeros de cuatro cifra suma pares = suma impares
int main(void)
{
    int u,d,c,m, par1,par2,par3,par4,impar1,impar2,impar3,impar4;
    int sumap,sumai;
    for (u=0;u=9;u++)
    {
        for (d=0;d=9;d++)
        {
            for (c=0;c=9;c++)
            {
                for (m=0;c=9;m++)
                {
                    if (u%2==0)
                    {
                        par1=u;
                    }
                        else
                        {
                            impar1=u;
                        }
                    if (d%2==0)
                    {
                        par2=d;
                    }
                        else
                        {
                            impar2=d;
                        }
                    if (c%2==0)
                    {
                        par3=c;
                    }
                        else
                        {
                            impar3=c;
                        }
                    if (m%2==0)
                    {
                        par4=m;
                    }
                        else
                        {
                            impar4=m;
                        }
                    sumap=par1+par2+par3+par4;
                    sumai=impar1+impar2+impar3+impar4;
                    if (sumap==sumai)
                    {
                        printf(" %d%d%d%d ", m,c,d,u);
                    }
                }
            }
        }
    }
    return 0;
}

