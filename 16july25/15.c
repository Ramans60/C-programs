#include <stdio.h>
int main()
{
    int i=1,j,x,a,b,c,k,l,p=1,q,r,s,t,u,v,w;
    printf("Enter a number:");
    scanf("%d",&x);
    r=x;
    a=x;
    while (i<=a)
    {
        k=1;
        while (k<i)
        {
            printf(" ");
            k++;
        }
        b=2*(a-i)+1; 
        j=1;
        while (j<=b)
        {
            if (i==1||j==1||j==b)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    s=r;
    p=1;
    while (p<=s)
    {
        w=1;
        while (w<=s-p)
        {
            printf(" ");
            w++;
        }
        q=1;
        t=2*i-1;
        while (q<=t)
        {
            if (q==1||q==t||v==s)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            q++;
	    }
        }
        printf("\n");
        p++;
    }
}

