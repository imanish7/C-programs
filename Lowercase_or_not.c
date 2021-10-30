#include<stdio.h>
main()
{
	char ch;
	printf("\nEnter the charecter");
	scanf("%c",&ch);
	
	if(ch>=97 && ch<=122)
	{
		printf("\nThe entered charecter is lower case");
	}
	else
	{
		printf("\nThe entered charecter is not a lower case");
	}
}
