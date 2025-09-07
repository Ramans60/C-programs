#include <stdio.h>
int main()
{
        int i=1,j=0,x=5,y=5,k=1,l=0,a,b,c,d,e,f,g;
	char m,n;
        while (i<=x)
        {
                k=2,++j;
                while (k<=j)
                {
                        printf(" ");
                        k++;
                }
                y=9,l=0,m=64;
                while (y>=j)
                {
			++m;
                        printf("%c ",m);
			y--;
                }
                printf("\n");
                i++;
		j++; 

        }
	a=1,b=0,c=5,d=5,e=1,f,g=x; 
    	while (a<=c)
    	{
        	g=5,f=g-a;
        	while (f>0)
        	{
			printf("  ");
            		f--;
        	}
        	e=1,b++,n=64; 
        	while (e<=b)
        	{
			n++;
		       	printf("%c ",n);
        	    	e++;
        	}
        	printf("\n");
        	a++;
		b++;
    	}
}

