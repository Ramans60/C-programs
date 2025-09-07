#include <stdio.h>
int main()
{
	int i=1,j=0,x=5,y=5,k=1,s,a=x; 
    	while (i<=x)
    	{
        	s=a-i;
        	while (s>0)
        	{
			printf(" ");
            		s--;
        	}
        	k=0,j++; 
        	while (k++<=9)
        	{
		       	printf("%d ",k);
        	    	k++;
        	}
        	printf("\n");
        	i++;
    	}
}

