#include <stdio.h>
int main()
{
	int x;
	printf("enter the temperature:");
	scanf("%d",&x);
	x<0 ? printf("the freezing codition\n") : 0>x||x<10 ? printf("very cold weather\n") :10>x||x<20 ? printf("very cold weather\n") : 20>x||x<30 ? printf("normal weather\n") : 30>x||x<40 ? printf("its hot\n") : x>=40 ? printf("its very hot\n"):printf("INVALID TEMPERATURE\n");
}

