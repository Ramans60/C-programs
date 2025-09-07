#include <stdio.h>
int main()
{
    int n=0,r=0,i,a,b,c,x,s;
    printf("PASCAL'S TRIANGLE\n Enter a number :");
    scanf("%d",&x);
    while (n<=x) 
    {
	    r=0;
        while (r<=n) 
	{
            a=1;
            i=1;
            while (i<=n)
	    {
                a=a*i;
                i++;
            }
            b=1;
            i=1;
            while (i<=r)
	    {
                b=b*i;
                i++;
            }
            c=1;
            i=1;
	    s=n-r;
            while (i<=s)
	    {
                c=c*i;
                i++;
            }
            printf("%d ", a/(b*c));
            r++;
        }
        printf("\n");
        n++;
    }
}

