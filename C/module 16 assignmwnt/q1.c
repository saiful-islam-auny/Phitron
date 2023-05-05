#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n,i,j,k;
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)   //up
    {
        for ( j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for ( k = 1; k <= (i*2)-1; k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    
    for ( i = n-1; i >=1; i--)   //down
    {
        for ( j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for ( k = 1; k <= (i*2)-1; k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    
    return 0;
}