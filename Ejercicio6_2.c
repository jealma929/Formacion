#include<stdio.h>
#include<math.h>

int main(void) 
{
	int n10, n20, n05,n50, r10, r20, r50, num;
	float num_real, entrada;
	printf("Introduce el cambio\n");
	scanf("%f", &entrada);
    num_real=entrada*100;
    printf((" %f \n", entrada);
	num = trunc(num_real);
    printf("%d %f", num ,num_real);
	/*if (num>50) 
	{
		n50 = trunc(num/50);
		r50 = num-(n50*50);
	}
	if (num<50 && num>20 || r50!=0) 
	{
		n20 = trunc(r50/20);
		r20 = r50-(n20*20);
	}
	if (num<20 && num>10 || r20!=0) 
	{
		n10 = trunc(r20/10);
		r10 = r20-(n10*10);
	}
	if (r10==5) 
	{
		n05 = 1;
	}
	printf("monedas 50 -> %i\n", n50);
	printf("monedas 20 -> %i\n", n20);
	printf("monedas 10 -> %i\n", n10);
	printf("monedas 05 -> %f\n", n05);
	return 0;*/;
}

