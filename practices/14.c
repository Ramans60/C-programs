#include <stdio.h>

int main()
{
    int i = 1, j, k, l, x, a, b;

    printf("Enter a number (odd recommended): ");
    scanf("%d", &x);
    a = x;
    while (i <= (a + 1) / 2)
    {
        k = 1;
        while (k < i)  // spaces increase with row number
        {
            printf(" ");
            k++;
        }

        b = a - 2 * (i - 1); // number of characters (stars + spaces) to print
        j = 1;

        while (j <= b)
        {
            if (j == 1 || j == b)
            {
                printf("*");
            }
            else
            {
                l = 0;
                while (l < 1)
                {
                    printf(" ");
                    l++;
                }
            }
            j++;
        }
        printf("\n");
        i++;
    }

    i = (a + 1) / 2 - 1;

    while (i >= 1)
    {
        k = 1;
        while (k < i)
        {
            printf(" ");
            k++;
        }

        b = a - 2 * (i - 1);
        j = 1;

        while (j <= b)
        {
            if (j == 1 || j == b)
            {
                printf("*");
            }
            else
            {
                l = 0;
                while (l < 1)
                {
                    printf(" ");
                    l++;
                }
            }
            j++;
        }
        printf("\n");
        i--;
    }

    return 0;
}

