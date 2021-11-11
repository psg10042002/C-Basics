//Finding square and perimeter of Rectangle//
#include<stdio.h>
void main()
{
	int l,b;
	printf("length of rectangle\n");
	scanf("%d",&l);
	printf("breadth of rectangle\n");
	scanf("%d",&b);
	printf("Area of rectangle is %d\n",l*b);
	printf("perimeter of rectangle is %d",2*(l+b));
}
