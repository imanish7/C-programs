#include<stdio.h>
void change(int a);
main()
{
	int b = 77;
	printf("The value of b before change is %d \n",b);
	change(b);
	printf("THe value of b after change is %d \n",b);
}

void change(int a)
{
	a=45;
}
