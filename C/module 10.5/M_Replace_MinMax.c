#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n,i=0,j,max=INT_MIN,min=INT_MAX,max_index,min_index;
    scanf("%d",&n);
    int a[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    i = 0;
    j = n-1;

    while(i!=n && j>=0)
    {
        if(a[i]>max)
        {
            max = a[i];
            max_index = i;
        }
        if(a[j]<min)
        {
            min = a[j];
            min_index = j;
        }
        i++;
        j--;
    }

    int temp;
    temp = a[max_index];
    a[max_index] = a[min_index];
    a[min_index] = temp;

    
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}