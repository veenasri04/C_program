//Area of cylinder (A) = 2*pi*r*(r + h)

#include<stdio.h>
main()
{
	int h;
	float r,pi,a;
	printf("enter r,h:\n");
	scanf("%f%d",&r,&h);
	pi=3.14;
	a=2*pi*r*(r+h);
	printf("area of cylinder=%f\n",a);
	
}
