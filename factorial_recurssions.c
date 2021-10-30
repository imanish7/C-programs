#include<stdio.h>
int factorial(int x);
main()
{
	int x=4;
	printf("The factorial of %d is %d \n",x, factorial(x));
}
int factorial(int x)
{
	if(x==0 || x==1)
	{
		return 1;
	}
	else 
	return x * factorial(x - 1);
}
