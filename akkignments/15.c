#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	x<1 ? printf("invalid data"):(x%4==0 ? printf("Leap year\n"):printf("Not a leap year\n"));
}

