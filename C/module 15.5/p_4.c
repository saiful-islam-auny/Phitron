#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

void change_it(int a[],int size)
{
    a[size-1] = 100;
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    change_it(a,n);

    return 0;
}