#include <stdio.h>

int main()
{
    int arr[100], i, pos, val,n;

    printf("How many element: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter position and value: ");
    scanf("%d %d", &pos, &val);

    for (i = n - 1; i >= pos - 1; i--) 
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = val;

    for (i = 0; i < n+1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}