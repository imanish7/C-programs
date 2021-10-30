#include<stdio.h>
main()
{
	int i,n;
	printf("Enter the number for multiplication\n");
	scanf("%d",&n);
	
	for(i; i<=10; i++)
	printf("The multiplication table is %d * %d == %d \n",n,i,n * i);
}
