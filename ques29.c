#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float avg;
	float per;
	printf("the marks of first subject is\n");
	scanf("%d",&a);
	printf("the marks of second subject is\n");
	scanf("%d",&b);
	printf("the marks of third subject is\n");
	scanf("%d",&c);
	printf("the marks of fourth subject is\n");
	scanf("%d",&d);
	printf("the marks of fifth subject is\n");
	scanf("%d",&e);
	avg=(a+b+c+d+e)/5;
	printf("the avg. of five sub. marks is %f\n",avg);
	per=100*(a+b+c+d+e)/500;
	printf("percentage is %f",per);
	return 0;
}
