#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,i,e=0,o=0;
    scanf("%d",&n);
    int a[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            e++;
        else
            o++;
    }
    
    printf("%d %d",e,o);
    return 0;
}