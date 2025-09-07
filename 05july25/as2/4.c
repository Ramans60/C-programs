#include <stdio.h>
int main()
{
	int i=1,x,y=1,z;
	printf("Enter a number:");
	scanf("%d",&x);
	while (i<=x)
	{
	printf("%d\n",i);
	y=y*i;
	i++;
	}
	printf("Factorial Value is:%d\n",y);
}

