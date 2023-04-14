#include <stdio.h>

int main()
{
    int n,i, a;
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        scanf("%d",&a);

        do
        {
            printf("%d ", a%10);
            a = a/10;
        }
        while(a!=0);
        
        printf("\n");
    }
    
    return 0;
}