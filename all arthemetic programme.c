#include<stdio.h>
void main()
{
	int a,b,sum,sub,m,d,p;
	a=10;
	b=20;
	sum=a+b;
	printf("sum of %d and %d is %d",a,b,sum);
	sub=a-b;
	printf("\nsubstraction of %dand %d is %d",a,b,sub);
	m=a*b;
	printf("\nmultifiction of %d and %d is %d",a,b,m);
	d=a/b;
	printf("\ndivision of %d and %d is %d",a,b,d);
	p=a%b;
	printf("\nmodule or remainder of %d and %d is %d",a,b,p);
}
