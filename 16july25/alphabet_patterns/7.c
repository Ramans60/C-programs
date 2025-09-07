#include <stdio.h>
int main()
{
	int i=1,j=0,x=5,y=5,k=1,s,a=x; 
	char m;
    	while (i<=x)
    	{
        	s=a-i;
        	while (s>0)
        	{
			printf(" ");
            		s--;
        	}
        	k=0,j++,m=64; 
        	while (k++<=9)
        	{
			m++;
		       	printf("%c ",m);
        	    	k++;
        	}
        	printf("\n");
        	i++;
    	}
}

