#include <stdio.h>
int main()
{
       	int i,j,k,m,n,x,y;
	printf("// Delete a number by using position //\n");
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
	printf("## The number with in 0 to less than %d \nEnter the position to Delete a number in array :",k);
	scanf("%d",&x);
     	for(i=0; i<k; i++) 
	{
		if(arr3[i]!=arr3[x])
			printf("%d ",arr3[i]);
     	}
	printf("\n ");
}
