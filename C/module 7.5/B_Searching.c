#include <stdio.h>

int main()
{
    int n,x,i;
    scanf("%d",&n);
    int a[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);

    for ( i = 0; i < n; i++)
    {
        if(a[i]==x)
        {
            printf("%d",i);
            break;
        }
    }
    if(i==n)
        printf("-1");

    
    return 0;
}