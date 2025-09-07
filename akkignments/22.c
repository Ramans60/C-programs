#include <stdio.h>
int main()
{
	int x;
	printf("enter the month Number:");
	scanf("%d",&x);
	x==1 ? printf("January\n"):x==2? printf("February\n"):x==3? printf("March\n"):x==4? printf("April\n"):x==5? printf("May\n"):x==6? printf("June\n"):x==7? printf("July\n"):x==8? printf("Auguest\n"):x==9? printf("September\n"):x==10? printf("October\n"):x==11? printf("November\n"):x==12? printf("December\n"):printf("Invalid data\n");
}


