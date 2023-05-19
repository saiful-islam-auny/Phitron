#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int n,i,big=INT_MIN;
    scanf("%d",&n);
    int a[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>big)
            big=a[i];
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d ",big-a[i]);
    }    

    return 0;
}