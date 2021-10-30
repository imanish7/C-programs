#include<stdio.h>
int multiplier(int *a);
main()
{
	int a=5;
	multiplier(&a);
	printf("The changed value of the variable is %d",a);
}

int multiplier(int *a)
{
	return (*a)*=10;
}
