#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,ci;
	printf("enter the principal ammount\n");
	scanf("%f",&p);
	printf("enter the rate of intrest\n");
	scanf("%f",&r);
	printf("enter the time\n");
	scanf("%f",&t);
	ci=p*(pow((1 + r/ 100),t));
	printf("compound intrest is %f",ci);
	return 0;
}
