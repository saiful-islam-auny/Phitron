#include <stdio.h>

int main()
{
    int n, m, i, j;
    printf("Enter 1st array size: ");
    scanf("%d", &n);
    printf("Enter 2nd array size: ");
    scanf("%d", &m);
    int a[n], b[m], c[n + m];

    printf("Enter 1st array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }

    printf("Enter 2nd array elements: ");
    for (i = i; i < n + m; i++)
    {
        scanf("%d", &b[i]);
        c[i] = b[i];
    }

    printf("New array elements are: ");
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}