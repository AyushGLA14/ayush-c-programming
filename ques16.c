#include<stdio.h>
int main()
{
	int a, b, sum=0,diff,pro=1,quo,rem;
	printf("enter the first no\n");
	scanf("%d",&a);
	printf("enter the second no.\n");
	scanf("%d",&b);
	sum=a+b;
	diff=a-b;
	pro=a*b;
	quo=a/b;
	rem=a%b;
	printf("the sum of two no. is %d\n",sum);
	printf("the diff of two no. is %d\n",diff);
	printf("the pro of two no. is %d\n",pro);
	printf("the quo of two no. is %d\n",quo);
	printf("the rem of two no. is %d\n",rem);
	return 0;
	
}
