#include <stdio.h>
int main()
{
    int i=1,j,x,a,b,k,l;
    char m,n;
    printf("Enter a number:");
    scanf("%d",&x);
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
}

