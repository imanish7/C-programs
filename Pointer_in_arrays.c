#include<stdio.h>
main()
{
	int marks[4],i;
	int *ptr;
	ptr = &marks[0];
	for(i=0; i<4; i++)
	{
		printf("Enter the marks of students %d:",i+1);
		scanf("%d",ptr);
		ptr++;
	}
	for(i=0; i<4; i++)
	{
		printf("Marks of the students %d is %d \n",i+1,marks[i]);
	}
}
