#include<stdio.h>
main()
{
	int n,i,prime;
	scanf("%d",&n);
	
	
	for(i=2; i<n; i++)
	{
		if(n%i==0)
		{
			prime = 0;
			break;
		}
	}
	if(prime==0)
	{
		printf("the number is a prime\n");
	}
	else
	{
		printf("The number is not a prime");
	}
}
