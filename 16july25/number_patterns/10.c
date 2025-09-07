#include <stdio.h>
int main()
{
    int i=1,j=0,x=5,y=5,k=1,a,b,c,l;
    printf("Enter a number: ");
    scanf("%d",&x);
    a=x;
    b=a;
    while (i<=x)
    {
        if (i>1&&i<a)
        {
            j=1;
            while (j<=a)
            {
                if (j==1||j==a)
                {
                    printf("%d ",j);
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
            k=1;
            while (k<=a)
            {
                printf("%d ",k);
                k++;
            }
        }
        printf("\n");
        i++;
    }
}

