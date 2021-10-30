#include<stdio.h>
void sumAndavg(int a,int b,int *sum,float *avg);

main()
{
	int a,b,sum;
	float avg;
	a=30;
	b=20;
	sumAndavg(a,b,&sum,&avg);
	printf("Sum of given numbers is %d\n",sum);
	printf("Average of given numbers is %f\n",avg);
	
}
void sumAndavg(int a,int b,int *sum,float *avg)
{
	*sum= a+b;
	*avg= *sum/2;
}
