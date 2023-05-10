#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

long long int sum(int a[], int index, long long int s)
{
    if(index<0) return s;
    s+=a[index];
    sum(a,index-1,s);
}

int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int a[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("%lld",sum(a,n-1,s));
    
    return 0;
}