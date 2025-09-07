#include <stdio.h>
int main()
{
	int i=1,j=0,x=5,y=5,k=1,s,a=x; 
    	while (i<=x)
    	{
        	a=5,s=a-i;
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
}
