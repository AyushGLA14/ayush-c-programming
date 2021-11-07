#include<stdio.h>
int main()
{
	float P,R,T,si;
printf("enter the principal ammount\n");
	scanf("%f",&P);
	printf("enter the rate of intrest\n");
	scanf("%f",&R);
	printf("enter the time\n");
	scanf("%f",&T);
	si=(P*R*T)/100.0;
	printf("simple intrest is %f",si);
	return 0;
}
