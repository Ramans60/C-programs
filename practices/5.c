#include <stdio.h>
int main()
{
	int i=1,j,x=5,y=5;
	while (i<=x)
	{
		j=1;
		while (j<=y)
		{
			printf("*  ");
			j++;
		}
		i++;
		printf("\n \n");
	}
}
