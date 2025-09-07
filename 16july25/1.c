#include <stdio.h>
int main()
{
	int i=1,j=0,x=5,y=5,k=1;
	while (i<=x)
	{
		k=1,++j;
		while (k<=j)
		{
			printf("* ");
			k++;
		}
		printf("\n");
		i++;
	}
}
