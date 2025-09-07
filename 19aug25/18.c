#include <stdio.h>
void fun(int *, int );
int main()
{
	printf("// Reverse  order of the array //\n");
	int arr[5]={3,2,7,5,4};
	fun(&arr[0],5);
}
void fun(int *ptr, int n)
{
	int i;
	int a1[i];
	printf("Original array\n");
	for (i=0; i<5; i++,ptr++)
	{
		a1[i]=*ptr;
		printf("%d ",*ptr);
	}
	printf("\n");
	printf("Reverse  array\n");
	for (i=4; i>-1; i--)
		printf("%d ",a1[i]);
	printf("\n");
}

