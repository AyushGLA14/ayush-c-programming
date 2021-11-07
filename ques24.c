#include<stdio.h>
#include<math.h> 
int main()
{
	int x,y;
	int exp;
	printf("enter the power\n");
	scanf("%d",&y);
	printf("enter the base\n");
	scanf("%d",&x);
	exp=pow(x,y);
	printf("power of number is %d",exp);
	return 0;
}
