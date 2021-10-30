#include<stdio.h>
int multiplier(int a);
main()
{
	int a=6;
	multiplier(a);
	printf("The number is increased is %d",multiplier(a));
}
int multiplier(int a)
{
	return a*10;
}
