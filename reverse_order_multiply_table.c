#include<stdio.h>
main()
{
	int n,i;
	printf("\nEnter the number for multiplication table");
	scanf("%d",&n);
	
	for(i=10; i; i--)
	{
		printf("%d * %d == %d\n",n,i,n * i);
	}
}
