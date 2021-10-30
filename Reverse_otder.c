#include<stdio.h>
main()
{
	int i,n;
	printf("\nEnter how many numbers you want to print");
	scanf("%d",&n);
	
	for(i=n; i; i--)
	{
		printf("\nThe numbers in reaverse order are %d",i);
	}
}
