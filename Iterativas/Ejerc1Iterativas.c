#include<stdio.h>
#include<math.h>

int main(void) 
{   
 	int i,sump,contp,sumi,conti;int error;
	float promp,promi;
    i=1;contp=0;conti=0;
    sump=0;sumi=0;
    promp=0;promi=0;
    for (i=1;i<=200;i++)
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
    promp=sump/contp;
    promi=(float)sumi/conti;
	printf("Promedio numeros pares   1-200 -> %.2f\n", promp);
	printf("Promedio numeros impares 1-200 -> %.2f\n", promi);
	return 0;
}
