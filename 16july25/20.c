#include <stdio.h>
int main()
{
	int i=1,j=0,x=5,y=5,k=1;
	while (i<=x)
	{
		if (i>1&&i<5)
		{
			j=0;
			while (j<=0)
			{
				printf("*         *");
				j++;
			}
		}
		else
		{
			k=0;
			while (k<=5)
			{
				printf("* ");
				k++;
			}
		}
		printf("\n");
	i++;
	}
}

