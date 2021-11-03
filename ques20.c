#include<stdio.h>
int main()
{
	float c,m,k;
	printf("enter length in cm\n");
	scanf("%f",&c);
	m=(float)(c/100);
	k=(float)(c/100000);
	printf("lenght in meter is %f\n",m);
	printf("length in kilometer%f",k);
	return 0;
}
