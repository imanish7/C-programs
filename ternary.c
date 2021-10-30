#include<stdio.h>
main()
{
	int num;
	printf("\nEnter any number");
	scanf("%d",&num);
	(num < 5) ? printf("\nnum is less than 5") : printf("\nnum is not less than 5");
}
