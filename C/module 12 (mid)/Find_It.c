#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,x,i,count=0;
    scanf("%d",&n);
    int a[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);

    for ( i = 0; i < n; i++)
    {
        if(x==a[i])
            count++;
    }

    printf("%d",count);
    
    return 0;
}