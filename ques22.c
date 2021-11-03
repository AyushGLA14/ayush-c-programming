#include<stdio.h>
int main()
{
	float cel,frah;
	printf("enter temp in frah");
	scanf("%f",&frah);
	cel=(5.0/9.0)*(frah-32);
	printf("temperature in celcius is %f",cel);
	return 0;
}
