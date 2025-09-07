#include <stdio.h>
int main()
{
    int i=1,j,x,a,b,c,l,k,p=1,q,r,s,t,u,v;
    printf("Enter a number: ");
    scanf("%d",&x);
    a=x;
    r=x;
    while (i<=a+1)
    {
        k=0;
        while (k<=a-i)
        {
            printf(" ");
            k++;
        }
        j=1;
        b=2*i-1;
        while (j<=b)
        {
            if (j==1||j==b)
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
    s=r,p=1;
    while (p<=a)
    {
        u=0;
        while (u<p)
        {
            printf(" ");
            u++;
        }
        t=2*(s-p)+1; 
        q=1;
        while (q<=t)
        {
            if (q==1||q==t)
            {
                printf("*");
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


