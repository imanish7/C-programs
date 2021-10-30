#include<stdio.h>
main()
{
	int year;
	printf("\nEnter the year you want to check");
	scanf("%d",&year);
	
    if(year % 400 == 0) 
	{
		printf("\nThe year is a leap year it has 366 days");
	}
	else if(year%100==0)
	{
		printf("\nThe year is not leap year");
    }

	else if(year % 4 == 0) 
	{
		printf("\nThe year is a leap year it has 366 days");
	}
    
	else
	printf("\nThe year is not a leap year");
}
