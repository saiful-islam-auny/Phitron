#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}