#include<stdio.h>
int main()
{
	float a,b;
	int i;
	printf("enter the first no.\n");
	scanf("%f",&a);
	b=a;
	for(i=0;i<b;i++)
	a++;
	printf("the sum of two no. are %f",a);
	return 0;
	
}
