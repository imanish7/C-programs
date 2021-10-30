#include<stdio.h>
void takenumber()
{
	int i;
	printf("Enter any number from the given number\n");
	scanf("%d",&i);
}
main()
{
	int a,b,c;
	printf("Enter numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	takenumber();
}
