#include<stdio.h>
main()
{
	int i=69;
	int *ptr = &i;
	int **ptr_ptr = &ptr;
	printf("The value of the variable is %d",**ptr_ptr);
	
}
