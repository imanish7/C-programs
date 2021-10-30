#include<stdio.h>
main()
{
	int age;
	int vippass=0;
	printf("\nEnter age");
	scanf("%d",&age);
	if((age <= 70 && age > 18) || (vippass==1))
	{
		printf("\n  eligible for driving license");
	}
	else
	{
	printf("\nNot eligible for driving license");
    }
    
}
