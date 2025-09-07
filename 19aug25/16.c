#include <stdio.h>
void fun(int *, int );
int main()
{
	int x;
	printf("// Search a number in the array //\nBy using its position\nEnter a position within 1 to 5 :");
	scanf("%d",&x);
	int arr[5]={3,2,7,5,4};
	fun(&arr[0],x);
}
void fun(int *ptr, int n)
{
	int i;
	for (i=0; i<n; i++,++ptr)
	{
	}
	--ptr;
	printf("%u\n",*ptr);
}
