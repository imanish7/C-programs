#include<stdio.h>
main()
{
	int grade;
	printf("\nEnter the number of a student");
	scanf("%d",&grade);
	
	switch(grade/10)
	{
		case 10:
		case 9:
			printf("\nGrade of a student is A");
			break;
		case 8:
			printf("\nGrade of a student is B");
			break;
		
		case 7:
			printf("\nGrade of a student is C");
			break;
		
		case 6:
			printf("\nGrade of a student is D");
			break;
		

		default:
			printf("\nGrade of a student is F");
							
	}
}
