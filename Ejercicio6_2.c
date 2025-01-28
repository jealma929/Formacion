#include<stdio.h>
#include<math.h>

int main(void) 
{   
    int error;
	int n10, n20, n05, n50, r10, r20, r50, num;
	float num_real, entrada;
    do
    {
        printf("\nIntroduce el cambio hasta 20 euros\n");
	    scanf("%f", &entrada);
        num_real=entrada*100;
	    num = trunc(num_real);
        error=num%5;
        printf("%d %d\n", num, error);
    }
    while((num%5)!=0 || num>2000);
	if (num>=50);
	{
		n50 = trunc(num/50);
		r50 = num-(n50*50);
	}
	if (num<50 && num>=20 || r50!=0);
	{
		n20 = trunc(r50/20);
		r20 = r50-(n20*20);
	}
	if (num<20 && num>=10 || r20!=0);
	{
		n10 = trunc(r20/10);
		r10 = r20-(n10*10);
	}
	if (r10==5) 
	{
		n05 = 1;
    }
        else
        {
            n05=0;
      
	}
	printf("monedas 50 -> %d\n", n50);
	printf("monedas 20 -> %d\n", n20);
	printf("monedas 10 -> %d\n", n10);
	printf("monedas 05 -> %d\n", n05);
	return 0;
}

