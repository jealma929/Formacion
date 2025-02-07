#include<stdio.h>
int main(void)
{
int i=0,r;;
while (i<3)
{
    switch(i)
    {
        case 0:
            r=i;
            break;
        case 1:
            r=i+1;
            break;
        case 2:
            r=i+2;
        case 3:
            r=i+3;
    }
    i++;
}
printf("%i ",r);
//system ("PAUSE");
return 0;
}
/*
    if (a>b)
    {
        mayor=a;
    }
        else
        {
            mayor=b;
        }
              else 
            {
                mayor=0;
            }
            a=a+mayor;
            b=b+mayor;
}
printf("%i  %i",a,b);
}
*/

/*
for(i=0;i<2;i++)
    {
    for(j=0;j<3;j++)
    {
        r=i+j;
        if(r%2==0)
            printf("%i ",r);
    }
}
    printf("\n");
    return 0;
}*/