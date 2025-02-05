#include <stdio.h>

int main()
{
//se puede inicializar de esta forma o con un bucle for
int i,a[5]={10,9,8,7,6};
int b[5]={1,2,3,4,5};
int *p1,*p2;
p1=&a[4];
//p1 apunta a 6 -- empezamos a contar desde cero
p2=b;
//p2 apunta a 1
for(i=0;i<5;i++)
    {
    *p2++=*p1--;
    }
//p2 toma el valor de p1 (primero asigna y luego incrementa)
for (i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
for (i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }    
}