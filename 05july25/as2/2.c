#include <stdio.h>
int main()
{
    int i=1,x,y=0,z=0,a=0,b=1,c=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while (i<=x)
    {
        if (i%2==0)
        {
            a=a+i;
            ++b;
        }
        else
        {
            a=a-i;
            c++;
        }
        ++i;
    }
    a=a+2;
    --c;
    printf("Total Positive numbers:%d\n",b);
    printf("Total Negative numbers:%d\n",c);
    printf("Sum:%d\n",a);
}

