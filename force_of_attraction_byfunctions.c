#include<stdio.h>
float force_of_attraction(float mass);
main()
{
	float m;
	printf("Enter the value of mass in kgs \n ");
	scanf("%f",&m);
	printf("The value of force of attraction in newton is %f \n ",force_of_attraction(m));
}
float force_of_attraction(float mass)
{
	return (mass * 9.8);
}
