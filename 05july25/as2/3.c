#include <stdio.h>
int main()
{
    int i=1,x,a=0,b=0,c=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(i<=x)
    {
        if (i%2!=0)
        {
            a=a+i;
            ++b;
        }
        else
        {
            a=a-i;
            ++c;
        }
        ++i;
    }
    printf("Total Positive numbers: %d\n",b);
    printf("Total Negative numbers: %d\n",c);
    printf("Sum: %d\n",a);
}
