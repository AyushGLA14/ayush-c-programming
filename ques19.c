#include<stdio.h>
int main()
{
	int r,dia;
	float area,circum;
	printf("enter a radius of a circle\n");
	scanf("%d",&r);
	dia=2*r;
	circum=2*3.14*r;
	area=3.14*r*r;
	printf("diameter of circle is %d",dia);
	printf("circum of circle is %f",circum);
	printf("area of circle is %f",area);
	return 0;
}
