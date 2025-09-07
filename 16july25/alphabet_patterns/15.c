#include <stdio.h>
int main()
{
        int i=1,j=0,x=5,y=5,k=1;
	char m=64;
        while (i<=x)
        {
                k=1,++j;
                while (k<=j)
                {
			++m;
                        printf("%c ",m);
                        k++;
                }
                printf("\n");
                i++;
        }
}

