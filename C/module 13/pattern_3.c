#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int i,j,n,k;
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        for ( j = 1; j <= n-i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    
    return 0;
}