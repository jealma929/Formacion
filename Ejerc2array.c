#include<stdio.h>

int main(void)

{
    int a[3][2];
    int b[3][2];
    int i,j;
    i=0;
    j=0;
    //Introducimos los datos en la tabla
    for (i=0;i<3;i++)
        {
        /*printf("\ni %d   j %d",i,j);*/
        for (j=0;j<2;j++)
            {
                printf("\nIntroduce el dato a[%d][%d] ", i,j);
                scanf("%d",&a[i][j]);
            }
        }

    //ordenamos la tabla en la tabla b
     for (i=0;i<3;i++)
        {
            for (j=0;j<2;j++)
            {
                if(a[i][j]<a[i][j+1])
                    {
                        b[i][j+1]=b[i][j];        
                    }
                    else
                    {
                        b[i][j]=b[i][j+1];
                    }
               
            }
        } 




    /*buscamos los valores maximo y minimo de cada fila
     for (i=0;i<3;i++)
        {
        
        for (j=0;j<2;j++)
            {
                if(a[i][j]>a[i][j+1])
                    {
                        printf("\nEn la fila %d el valor maximo es %d y el minimo %d", a[i][j],a[i]);        
                    }
                printf("\nEn la fila %d el malor maximo es %d y el minimo %d");
                scanf("%d",&a[i][j]);
            }
        }*/     
    return 0;
}