#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter first angle of triangle\n");
	scanf("%d",&x);
	printf("enter the second angle of triangle\n");
	scanf("%d",&y);
	z=180-(x+y);
	printf("third angle of trianngle is%d",z);
	return 0;
}
