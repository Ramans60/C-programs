#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,n,r,x,y,i=1,j=10,k=0,l=1,s,z;
	x=5,y=5,z=5,s=5;
	printf("Enter a number:");
	while (j<=x)
	{
		while (k<=0)
		{
			a=1;
			while (i<=a)
			{
				a=a*i;
				printf("hi1\n");
				n=n+a;
				i++;
			}
	       		while (i<=z)
                	{
                        	b=b*i;
				printf("hi2\n");
                        	r=r+a;
                        	i++;
                	} 
			s=a-b;
			while (i<=s)
               	 	{
                        	c=c*i;
				printf("hi3\n");
                        	f=f+a;
                        	i++;
                	}
			c=n/r*f;
	        	printf("hi0\n");
			k++;
		}
		j++;
	}
}
