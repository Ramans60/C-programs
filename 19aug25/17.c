#include <stdio.h>
void fun(int *, int );
int main()
{
	int x;
	printf("// Search and delete a number in the array //\nBy using its position\nEnter a position within 0 to 4 :");
	scanf("%d",&x);
	int arr[5]={3,2,7,5,4};
	fun(&arr[0],x);
}
void fun(int *ptr, int n)
{
	int i;
	for (i=0; i<5; i++,++ptr)
	{
		if(i!=n)
		{
			printf("%u\n",*ptr);
		}
	}
}
