#include<stdio.h>
main()
{
	int i;
	int marks[5];
	
	for(i=0; i<5; i++)
	{
		printf("Enter the marks of students %d:",i+1);
		scanf("%d",&marks[i]);
	}
	
	for(i=0; i<5; i++)
	{
		printf("Marks of students %d is: %d\n",i+1,marks[i]);
	}
}
