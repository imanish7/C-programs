#include<stdio.h>
main()
{
	int physics,chemistry,maths;
	float total;
	
	printf("\nEnter marks of physics");
	scanf("%d",&physics);
	
	printf("\nEnter marks of maths");
	scanf("%d",&maths);
	
	printf("\nEnter marks of chemistry");
	scanf("%d",&chemistry);
	
	total=(physics + chemistry + maths)/3;
	
	if((total<40) || physics<33 || chemistry<33 || maths<33)
	
	{
		printf("\ntotal percentage of student is %f and he is fail",total);
	
	}
	else
	{
		printf("\nTotal percentage of a student is %f and he is pass",total);
	}
	 
		
}
