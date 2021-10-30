#include<stdio.h>
int sum(int a, int b);
main()
{
	int c;
	c = sum(2,20);
	printf("The value of c is %d",c);
}
int sum(int a, int b)
{
	int c;
	c=a+b;
	return c;
}
