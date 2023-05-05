#include <stdio.h>
#include <stdlib.h>


void one_to_n()
{    
    int n,i;
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        printf("%d",i);
        if(i!=n)
            printf(" ");
    }
    
}

int main()
{

    one_to_n();

    return 0;
}