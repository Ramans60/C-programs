#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	x>17&&x<100 ? printf("candidate are eligile for casting his/her voting\n") : ( x<17&&x>0 ? printf("not eligible for voting\n"):printf("in valid data\n"));
}

