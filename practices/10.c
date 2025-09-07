#include <stdio.h>

int main()
{
    int i = 1, j = 0, x = 5, y = 5, k = 1, a, b, c, l;

    printf("Enter a number: ");
    scanf("%d", &x);

    a = x;
    b = a;
    c = --b;

    while (i <= x)
    {
        if (i > 1 && i < a)  // middle rows
        {
            j = 1;
            while (j <= a)
            {
                if (j == 1 || j == a)  // left or right border
                {
                    printf("* ");
                }
                else
                {
                    printf("  "); // two spaces for spacing between borders
                }
                j++;
            }
        }
        else  // first and last rows
        {
            k = 1;
            while (k <= a)
            {
                printf("* ");
                k++;
            }
        }
        printf("\n");
        i++;
    }

    return 0;
}

