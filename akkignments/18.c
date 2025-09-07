#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
        x==y ? printf("x is equal to y\n"):(x<y ? printf("x is lesser\n"):printf("y is lesser\n"));
}
