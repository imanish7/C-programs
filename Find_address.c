#include<stdio.h>
main()
{
	int a=78;
	int *ptr=&a;
	printf("The address of a is %u\n",&a);
	printf("The value of a is %d\n",*ptr);
	
}
