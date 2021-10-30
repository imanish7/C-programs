#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("\nEnter four numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a>b && a>c && a>d)
	{
		printf("\nLargest number is %d",a);
	}
	
	else if(b>a && b>c && a>d)
	{
		printf("\nLargest number is %d",b);
	}
	
	else if(c>b && c>a && c>d)
	{
		printf("\nLargest number is %d",c);
	}
	
	else if(d>b && d>c && d>a)
	{
		printf("\nLargest number is %d",d);
	}
}

