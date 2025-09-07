#include <stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	(c >='a' && c <='z'||c >='A'&&c <='Z')? printf("it is alphabet \n%c\n",c) : printf("not a alphabet\n %c\n",c);
}


