#include <stdio.h>
void fun(int *, int );
int main()
{
	printf("// Largest number in the array //\n");
	int arr[5]={3,2,7,5,4};
	fun(&arr[0],5);
}
void fun(int *ptr, int n)
{
	int i,k=*ptr;
	for (i=0; i<n; i++,ptr++)
	{
		if (*ptr>k)
		{
			k=*ptr;
		}
	}
	printf("Largest number is = %d\n",k);
}
