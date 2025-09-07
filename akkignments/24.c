#include <stdio.h>
int main()
{
	int a,b,c,x,y,z;
	printf("enter size of a:");
	scanf("%d",&a);
	printf("enter size of b:");
	scanf("%d",&b);
	printf("enter size of c:");
	scanf("%d",&c);
	x=a+b>c;
	y=a+c>b;
	z=b+c>a;
	x&&y&&z ? printf("posible to make triangle\n"):printf("not possible to make triangle\n");
}
	


