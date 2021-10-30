#include<stdio.h>
void reverse(int *arr,int n)
{
	int temp,i;
	for(i=6;i>=0;i--)
//	{
		printf("%d \n",*arr+i);
//		temp=arr[i];
//		arr[i]=arr[n-i-1];
//		arr[n-i-1]=temp;
//	}
}
main()
	{
		int i,arr[]={1,2,3,4,5,6,7};
		reverse(arr,7);
		for(i=0;i<7;i++)
		{
			printf("Reversed order of array is %d \n",arr[i]);
		}
		void reverse(int *arr,int n);
	}

