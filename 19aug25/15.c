#include <stdio.h>
void fun(int *, int );
int main()
{
	printf("// Sum of the numbers in array //\n");
	int arr[5]={3,2,7,5,4};
	fun(&arr[0],5);
}
void fun(int *ptr, int n)
{
	int i,k=0;
	for (i=0; i<n; i++,ptr++)
	{
		k=k+*ptr;
	}
	printf("Total = %d\n",k);
}
