#include <stdio.h>

int main()
{
    int i = 1, j, x, a, b, k, l;

    printf("Enter a number: ");
    scanf("%d", &x);

    a = x;

    while (i <= a)
    {
        // Print leading spaces (i-1)
        k = 1;
        while (k < i)
        {
            printf(" ");
            k++;
        }

        b = 2 * (a - i) + 1; // number of positions on this line

        j = 1;
        while (j <= b)
        {
            if (i == 1 || j == 1 || j == b) // first row or edges
            {
                printf("*");
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

