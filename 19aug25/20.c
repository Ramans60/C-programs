#include <stdio.h>
void fun(int *, int );
int main()
{
	printf("// Decending order of the array //\n");
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
	int j,x;
	for (i=0; i<n; i++)
	{
		for (j=i+1; j<5; j++)
		{
			if(a[i]<a[j])
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	for (i=0; i<5; i++)
		printf("%d ",a[i]);
	printf("\n");
}
