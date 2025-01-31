#include<stdio.h>
#include<math.h>

int main(void) 
{   
 	int i,sump,contp,sumi,conti;
	float promp,promi;
    for (i=1;200;i++)
	{
	    if (i%2==0)
        {
            sump=sump+i;
            contp++;
        }
        else
            {
                sumi=sumi+i;
                conti++;
            }    
    }
    promp=(float)sump/contp;
    promi=(float)sumi/conti;
	printf("Promedio numeros pares   1-200 -> %f\n", promp);
	printf("Promedio numeros impares 1-200 -> %f\n", promi);
	return 0;
}
