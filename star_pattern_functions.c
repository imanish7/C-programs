#include<stdio.h>
int pattern(int n);
main()
{
	int p;
	printf("The lines of pattern\n");
	scanf("%d",&p);
	pattern(p);
}

int pattern(int n)
{
	if(n==1)
	{
		printf("*\n");
		return;
	}
	int i;
	pattern(n-1);
	for(i=1; i<=2*n-1; i++)
	{
		printf("*");
	}
	printf("\n");
}
