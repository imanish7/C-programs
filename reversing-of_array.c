#include<stdio.h>
void reverse(int *arr, int n);
{
	int i,temp;
	for(i=0;i<n/2;i++)
	{
		temp= arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
}
main()
{
	int i,n;
	printf("Enter no. elements in the array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
}
	

