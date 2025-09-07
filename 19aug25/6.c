#include <stdio.h>
int main()
{
       	int i,j,k,m,n;
	printf("// Sum of the array numbers //\n");
	printf("Enter 1st array size m:");
	scanf("%d",&m);
      	printf("Enter 2nd array size n:");
      	scanf("%d",&n);
      	int arr1[m];
      	int arr2[n];
	k=m+n;
	int arr3[k];
	printf("Enter 1st array numbers\n");
      	for(i=0; i<m; i++) 
      	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter 2st array numbers\n");
       	for(i=0; i<n; i++) 
       	{
      		scanf("%d",&arr2[i]);
      	}

     	for(i=0; i<m; i++) 
	{
	  	arr3[i] = arr1[i];
     	}
     	for(i=0; i<n; i++) 
	{
	  	arr3[i+m] = arr2[i];
     	}
	int x=0;
     	for(i=0; i<k; i++) 
	{
	       	x=x+arr3[i];
     	}
	printf("Total = %d ",x);
	printf("\n");
}

