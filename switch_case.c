#include<stdio.h>
main()
{
	int rating;
	printf("\nEnter rating (1-5)");
	scanf("%d",&rating);
	
	switch(rating)
	{
		case 1:
			printf("\nYour rating is 1");
			break;
		case 2:
			printf("\nYour rating is 2");
			break;
		case 3:
			printf("\nYour rating is 3");
			break;
		case 4:
			printf("\nYour rating is 4");
			break;
		case 5:
			printf("\nYour rating is 5");
			break;
		default:
			printf("\nInvalid rating");
			break;				
	}
}
