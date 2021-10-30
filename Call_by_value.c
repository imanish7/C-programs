#include<stdio.h>
int sum(int a, int b);
main()
{
	int x = 4,y = 7;
	printf("the value of x and y before function call is %d %d\n",x,y);
	printf("Sum of x and y is %d\n",sum(x,y));
	printf("The value of x and y is after function call is %d %d\n",x,y);
}

int sum(int a, int b)
{
	int c;
	c = a + b;
	return c;
}
