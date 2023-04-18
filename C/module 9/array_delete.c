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

    printf("Enter position: ");
    scanf("%d", &pos);

    for (i = pos-1; i < n-1; i++) 
    {
        arr[i] = arr[i+1];
    }

    for (i = 0; i < n-1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}