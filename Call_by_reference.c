#include<stdio.h>
void wrong_swap(int a,int b);
void swap(int *a,int *b);
main()
{
	int a= 6,b= 8;
	printf("The values of a and b before swapping is %d %d\n",a,b);
//	wrong_swap(a,b);
    swap(&a,&b);
	printf("The values of a and b after swapping is %d %d\n",a,b);
}

void wrong_swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
 }
 
void swap(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
 } 
