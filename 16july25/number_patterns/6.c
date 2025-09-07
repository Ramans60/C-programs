#include <stdio.h>
int main()
{
        int i=1,j=0,x=5,y=5,k=1,l=0,m;
        while (i<=x)
        {
                k=2,++j;
                while (k<=j)
                {
                        printf(" ");
                        k++;
                }
                y=9,l=0,m=0;
                while (y>=j)
                {
			++m;
                        printf("%d ",m);
			y--;
                }
                printf("\n");
                i++;
		j++; 

        }
}

