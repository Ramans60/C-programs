#include <stdio.h>
int main()
{
	int x,y,z;
	x=14;
	y=60;
	z=34;
	x==y==z ? printf("values are equal\n"):(x>y&&x>z ? printf("x is greater\n"):y>x&&y>z ? printf("y is greater\n"):printf("z is greater\n"));
}
			

