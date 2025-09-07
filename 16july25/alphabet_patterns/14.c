#include <stdio.h>
int main()
{
    int i=1,j,x,a,b,k,l,p=1,q,r,s,t,u,v,w;
    char m,n;
    printf("Enter a number:");
    scanf("%d",&x);
    a=x;
    r=x;
    while (i<=a-1)
    {
        k=1;
        while (k<i)
        {
            printf(" ");
            k++;
        }
        b=2*(a-i)+1; 
        j=1,m=64;
        while (j<=b)
        {
            if (i==1||j==1||j==b)
            {
		    ++m;
		    printf("%c",m);
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
    while (p<=s)
    {
        w=1;
        while (w<=s-p)
        {
            printf(" ");
            w++;
        }
        q=1;
        t=2*p-1,n=64;
        while (q<=t)
        {
            if (q==1||q==t||p==s)
            {
		    ++n;
		    printf("%c",n);
            }
            else
            {
                printf(" ");
            }
            q++;
        }
        printf("\n");
        p++;
    }
}

