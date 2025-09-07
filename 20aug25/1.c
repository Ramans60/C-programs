#include <stdio.h>
void fun(int *, int );
int main()
{
	printf("// Second smallest in array //\n");
	int arr[5]={3,2,7,5,4};
	fun(&arr[0],5);
}
void fun(int *ptr, int n)
{
	int i;
	int a[i];
	for (i=0; i<5; i++,ptr++)
	{
		a[i]=*ptr;
	}
	int j,first=a[0],second=a[0];
	for (i=0; i<n; i++)
	{
		if(a[i]<first)
		{
			second=first;
			first=a[i];
		}
		else if (a[i]>second&&a[i]<first)
		{
			second=a[i];
		}
	}
	printf("Second smallest element = %d\n",second);
}
