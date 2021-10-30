#include<stdio.h>
main()
{
	int arr[3][3],i,j;
	printf("Enter Elements in the array\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
		for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
             printf("%d ",arr[i][j]);
             if(j==2)
             printf("\n");
		}
	}

}
