#include<stdio.h>
int average(int a,int b,int c);
main()
{
	int a=6,b=8,c=10;
	printf("The average of %d",average(a,b,c));
}

int average(int a,int b,int c)
{
	return (a+b+c) /3;
	
}
