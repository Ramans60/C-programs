#include <stdio.h>
void fun(int *, int );
int main()
{
	int arr[5]={3,2,7,5,4};
	fun(&arr[0],5);
}
void fun(int *ptr, int n)
{
	int i;
	for (i=0; i<n; i++,ptr++)
		printf("%u\n",*ptr);
}
