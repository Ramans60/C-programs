#include <stdio.h>

int main()
{
    int i = 1, j, a, b, c, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    a = n;

    while (i <= a)
    {
        j = 1;
        while (j <= 2 * a - 1)
        {
            if (i == 1)
            {
                printf("*");  // First row: all stars
            }
            else if (j == i || j == 2 * a - i)
            {
                printf("*");  // Edges: left and right hollow lines
            }
            else
            {
                printf(" ");  // Inner hollow space
            }
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}

