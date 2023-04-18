#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    long long sum=0;
    scanf("%d",&n);
    int a[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    
    if(sum<0)
        printf("%lld",(sum)*-1);
    else
        printf("%lld",sum);

    
    return 0;
}