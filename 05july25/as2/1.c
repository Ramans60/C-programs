#include <stdio.h>
int main()
{
	int x,i=1,y=0;
	printf("Enter a Number:");
	scanf("%d",&x);
	while (i<=x)
	{
		printf("%d\n",i);
		y=y+i;
		i++;
	}
	printf("sum:%d\n",y);
}
