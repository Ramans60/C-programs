#include <stdio.h>
int main()
{
	int i=1,j=0,x=5,y=5,k=1,a,b,c,l;
	printf("Enter a number:");
	scanf("%d",&x);
	a=x;
	b=a;
	c=--b;
	while (i<=x)
	{
		if (i>1&&i<a)
		{
			j=1;
			while (j<=i)
			{
				if (j==1)
				{
					printf("*");
				}
				else if (j>1&&j<a)
				{
					l=0;
					while (l<=a)
					{
						printf(" ");
						l++;
					}

				}
				else if (j==a)
					printf("*1");
				else 
					printf("hi");
				j++;

			}
		}
		else
		{
			k=0;
			while (k<=a)
			{
				printf("* ");
				k++;
			}
		}
		printf("\n");
	i++;
	}
	printf("%d",a);
}


