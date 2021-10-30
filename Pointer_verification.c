#include<stdio.h>
main()
{
	int arr[10];
	int *ptr=&arr[0];
	ptr=ptr+2;
	if(ptr==&arr[2])
	{
		printf("YES their location is same\n");
	}
	else
	{
		printf("No rheir location is not same");
	}
}
