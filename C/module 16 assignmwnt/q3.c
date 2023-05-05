#include <stdio.h>
#include <stdlib.h>

int count_before_zero(int a[], int size)
{
    int i,count=0;
    for ( i = 0; i < size; i++)
    {
        if(a[i]==0)
            break;

        count++;
    }

    return count;
}

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("%d",count_before_zero(a,n));

    return 0;
}