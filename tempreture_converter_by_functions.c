#include<stdio.h>
float fahrenheit(int a);
main()
{
	int a;
	printf("Enter celsius \n");
	scanf("%d",&a);
	printf("Conversion of celsius %d to fahrenheit %f \n",a,fahrenheit(a));
}
float fahrenheit(int a)
{
	return (a * 1.8)+32; 
}
