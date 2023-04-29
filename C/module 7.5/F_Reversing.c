#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    
    int n,i,j;
    scanf("%d",&n);
    long long int a[n],temp;
    
    for ( i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
    }
    
    i=0,j=n-1;

    while(i<j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    for ( i = 0; i < n; i++)
    {
        printf("%lld ",a[i]);
    }
    
    
    return 0;
}