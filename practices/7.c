#include <stdio.h>
int main()
{
	int i=1,j=0,x=5,y=5,k=1,s,a=x;
	while (i<=x)
	{
		s=a-i,a=5;
		while (s>0)
		{
			printf(" ");
			s--;
		}
		y=10,j=1;
		while (y>=j)
		{
			printf("*  ");
			y--;
		}
		i++;
		printf("\n");
	}
}


