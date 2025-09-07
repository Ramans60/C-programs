#include <stdio.h>
int main()
{
	int j=1;
	while (j<=5)
	{
	char x;
	int a=0,b=0,c=0,y=0,z;
	printf("do u want continue 'y/n':");
	scanf("%c",&x);
	if (x=='y')
	{
	while (x=='y')
        {
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
                scanf(" %c",&x);
        }
        printf("Number of pass subjects:%d\n",b);
        printf("Total pass marks:%d\n",y);
        printf("Number of fail subjects:%d\n",c);
        printf("Total fail marks:%d\n",a);
        printf("percentage:%d\n",((y+a)/(b+c)));
	}
	}
	else if (x=='n')
		printf("Exit\n");
	else	
		printf("Invalid input\n");
	j++;
	}
}



