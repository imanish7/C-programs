#include<stdio.h>
void address(int *a);
main()
{
	int i = 56;
	printf("The value of i is %d\n",i);
	address(i);
	printf("The address of i is %u\n",&i);
}

void address(int *a)
{
	printf("The address of a is %u\n",&a);
}
