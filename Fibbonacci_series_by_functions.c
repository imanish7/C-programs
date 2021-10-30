#include<stdio.h>
int fibo(int num);
main()
{
	int num;
	int result;
	
	printf("Enter the nth number\n");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("there is no value of negative numbers\n");
	}
	else
	{
		result=fibo(num);
		printf("The nth %d value of nth term is %d\n",num,result);
	}
	
}
int fibo(int num)
{
	if(num==0)
	{
		return 0;
	}
	else if(num==1)
	{
		return 1;
	}
	else
	{
		return (fibo(num-1) + fibo(num-2));
	}
}
