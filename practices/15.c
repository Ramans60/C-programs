#include <stdio.h>

int main()
{
    int i = 1, j, n, a, b, c;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    a = n;

    while (i <= n) // row loop
    {
        j = 1;
        while (j <= 2 * n - 1) // total columns
        {
            if (j == n - i + 1 || j == n + i - 1 || i == n)
            {
                printf("*");
            }
            else if (j > n - i + 1 && j < n + i - 1 && i != n)
            {
                printf(" ");
            }
            else
            {
                printf(" ");
            }
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}

