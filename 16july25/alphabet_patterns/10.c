#include <stdio.h>
int main()
{
    int i=1,j=0,x=5,y=5,k=1,a,b,c,l;
    char m,n;
    printf("Enter a number: ");
    scanf("%d",&x);
    a=x;
    b=a;
    while (i<=x)
    {
        if (i>1&&i<a)
        {
            j=1,m=64;
            while (j<=a)
            {
                if (j==1||j==a)
                {
			++m;
			printf("%c ",m);
                }
                else
                {
                    printf("  ");
                }
                j++;
            }
        }
        else
        {
            k=1,n=64;
            while (k<=a)
            {
		    ++n;
		    printf("%c ",n);
		    k++;
            }
        }
        printf("\n");
        i++;
    }
}

