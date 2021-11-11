//finding rectangles area amd perimeter//
#include<stdio.h>
void main()
{
	int l,b,a,p;
	printf("length of rectangle\n");
	scanf("%d",&l);
	printf("breadth of rectangle\n");
	scanf("%d",&b);
	a=l*b;
	p=2*(l+b);
	printf("Area of rectangle is %d\n",a);
	printf("perimeter of rectangle is %d",p);
}
