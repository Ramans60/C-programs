#include <stdio.h>
int main()
{
    int i=1,j,x,a,b,c,l,k;
    char m,n;
    printf("Enter a number: ");
    scanf("%d",&x);
    a=x;
    while (i<=a)
    {
        k=1;
        while (k<=a-i)
        {
            printf(" ");
            k++;
        }
        j=1,m=64;
        b=2*i-1;
        while (j<=b)
        {
            if (j==1||j==b||i==a)
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
}

