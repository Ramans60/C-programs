#include <stdio.h>
int main()
{
	int x,y,a;
	scanf("%d%d",&x,&y);
	a=x+y;
	x=a-x;
	y=a-y;
	printf("%d %d\n",x,y);
}
