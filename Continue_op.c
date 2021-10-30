#include<stdio.h>
main()
{
	int i=0,skip=5;
	while(i<10)
	{
		i++;
		if(i!=skip)
		{
			continue;
		}
		else
		{
			printf("\n %d",i);
		}
	}
}
