#include <stdio.h>
int main()
{
	int i=1,j=0,x=5,y=5,k=1,l=i;
	char m;
	while (i<=x)
	{
		k=1,++j;
		while (k<=j)
		{
			printf("  ");
			k++;
		}
		y=5,l=0,m=64;
		while (y>=i)
		{
			++m;
			printf("%c ",m);
			y--;
		}
	       	printf("\n");
                i++;

	}
}

