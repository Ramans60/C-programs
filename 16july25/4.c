#include <stdio.h>
int main()
{
	int i=1,j,x,s,y,n=10;
	while (i<=n)
	{
		s=n-i;
		j=1;
		while (j<=s)
		{
			printf("*");
        		j++;
    		}
		printf("\n");
		i++;
	}
}

