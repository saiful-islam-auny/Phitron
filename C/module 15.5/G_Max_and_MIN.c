#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

void max_min(int a[], int n)
{
    int max=INT_MIN,min=INT_MAX,i;
    for ( i = 0; i < n; i++)
    {
        if(a[i]<min)
            min = a[i];
        if(a[i]>max)
            max = a[i];
    }

    printf("%d %d",min,max);
    
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    max_min(a,n);

    return 0;
}