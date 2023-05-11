#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; ++i)

    {

        for (j = i + 1; j < n; ++j)

        {

            if (a[i] > a[j])

            {

                temp = a[i];

                a[i] = a[j];

                a[j] = temp;
            }
        }
    }

    if (n % 2 != 0)
    {
        printf("%d", a[n / 2]);
    }
    else
        printf("%d %d", a[(n / 2)-1], a[n / 2]);

    return 0;
}