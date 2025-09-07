#include <stdio.h>
int main()
{
	int i=1,j=0,x=5,y=5,k=1,s,a=x,b,c,d,e,f,g; 
    	while (i<=x)
    	{
        	s=a-i,a=5;
        	while (s>0)
        	{
			printf("  ");
            		s--;
        	}
        	k=1,j++; 
        	while (k<=j)
        	{
		       	printf("* ");
        	    	k++;
        	}
        	printf("\n");
        	i++;
		j++;
    	}
	b=1,c=0,d=5,e=5,f=1,g=0;
	while (b<=d)
	{
		f=2,++c;
                while (f<=c)
                {
                        printf(" ");
                        f++;
                }
                e=9,g=0;
                while (e>=c)
                {
                        printf("* ");
			e--;
                }
                printf("\n");
                b++;
		c++; 

        }
}



