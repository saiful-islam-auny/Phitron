#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n], index, small= INT_MAX;

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);

        if(a[i]<small)
        {
            small = a[i];
            index = i;
        }
    }
    printf("%d %d",a[index],index+1);
    

    

    return 0;
}