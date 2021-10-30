#include<stdio.h>
main()
{
	int a = 6,b = 7;
	int *ptr = &a;
	int *ptr2 = &b;
	printf("The given number is %u \n",ptr);
	ptr++;
	ptr++;
	printf("The new number is %u \n",ptr);
	ptr--;
	printf("The new number after substraction is %u",ptr);
	printf("The second number is %u \n",ptr2);
	if(ptr > ptr2)
	{
		printf("ptr is greater\n");
	}
	else
	{
		printf("ptr2 is greater \n");
	}
}
