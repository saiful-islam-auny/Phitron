#include <stdio.h>

int main()
{
    int n,i,a;
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a);
        while(a!=0)
        {
            printf("%d ", a%10);
            a = a/10;
        }
        printf("\n");
    }
    
    return 0;
}