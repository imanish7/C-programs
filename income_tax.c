#include<stdio.h>
main()
{
	float income, tax = 0;
	printf("\nEnter income of a person");
	scanf("%f",&income);
	
	if(income>=250000 && income<=500000)
	{
		tax = tax + 0.05 * income;
	}
	
	if(income>=500000 && income<=1000000)
	{
		tax = tax + 0.20 * income;
	}
	
	if(income>=1000000)
	{
		tax = tax + 0.30 * income;
	}
	printf("\nYou have to pay income tax of amount %f ",tax);
}
