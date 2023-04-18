#include <stdio.h>

int main()
{
    int n,i,j,temp;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    i=0;
    j=n-1;

    while (i<=j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    printf("Reverse array: ");   
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}