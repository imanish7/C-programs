#include<stdio.h>
main()
{
	int n_students=2;
	int n_subjects=3;
	
	int marks[2][3];
	int i,j;
	for(i=0; i<n_students; i++)
	{
		for(j=0; j<n_subjects; j++)
		{
			printf("Enter the marks of students %d in subjects %d \n",i+1,j+1);
			scanf("%d",&marks[i][j]);
		}
	}
	for(i=0; i<n_students; i++)
	{
		for(j=0; j<n_subjects; j++)
		{
			printf("The marks of students %d in subjects %d is %d \n",i+1,j+1,marks[i][j]);
		}
	}
}

