#include <stdio.h>
int main()
{
	int i=1,j,x,s,y,n=10;
	char m;
	while (i<=n)
	{
		s=n-i;
		j=1,m=64;
		while (j<=s)
		{
			m++;
			printf("%c",m);
        		j++;
    		}
		printf("\n");
		i++;
	}
}

