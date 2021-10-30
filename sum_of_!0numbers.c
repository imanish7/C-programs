#include<stdio.h>
main()
{
	int sum=0,n,i;
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=i;
		i++;
	}
//	for(i=1; i<=n; i++)
//	{
//		sum+=i;
//	}
	printf("Sum of a given number is %d\n",sum);
}
