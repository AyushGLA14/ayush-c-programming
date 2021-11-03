#include<stdio.h>
#include<math.h>
int main()
{
	int s=10;
	int a=7;
	int b=8;
	int c=9;
	int area;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("the area is %d",area);
	return 0;
}
