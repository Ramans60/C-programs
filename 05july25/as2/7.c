#include <stdio.h>
int main()
{
	int j=1;
	while (j<=5)
	{
        int i,x,y=0,z,a=0,b=0,c=0,l;
        printf("Enter number of subjects:");
        scanf("%d",&x);
	i=1;
        while (i<=x )
        {
                printf("Enter your mark:");
                scanf("%d",&z);
                {
                if (z>=35&&z<=100)
                {
                        printf("pass\n");
                        y=y+z;
                        b++;
                        printf("sum:%d\n",y);
                }
                else if(z>0&&z<35)
                {
                        printf("fail\n");
                        a=a+z;
                        c++;
                        printf("sum:%d\n",a);
                }
		else
			printf("Invalid marks\n");
                }
                i++;
	}
        printf("Number of pass subjects:%d\n",b);
        printf("Total pass marks:%d\n",y);
        printf("Number of fail subjects:%d\n",c);
        printf("Total fail marks:%d\n",a);
	printf("percentage:%d\n",((y+a)/(b+c)));
	j++;
	}
}


