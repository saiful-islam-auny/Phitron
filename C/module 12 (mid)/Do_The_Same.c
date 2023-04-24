#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,k,i,j;
    scanf("%d %d",&n,&k);

    for ( i = 1; i <= k; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    
    return 0;
}