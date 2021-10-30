#include<stdio.h>
void printarray(int *ptr,int n)
{
	int i;
	for(i=0; i<n; i++)
	printf("Enter the elements %d in the array %d \n",i+1,*(ptr+i));
}
main()
{
	int arr[]={12,23,34,56,7,6};
	printarray(arr,6);
}
