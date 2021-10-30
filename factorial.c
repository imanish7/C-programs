#include<stdio.h>
main()
{
	int i,n,factorial=1;
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		factorial*=i;
	}
	printf("Factorial of %d is %d",n,factorial);
}
