#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int t,i;
    long long int s,a,b,c;
    scanf("%d",&t);

    for ( i = 0; i < t; i++)
    {
        scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
        printf("%lld\n",s-(a+b+c));
    }
    

    return 0;
}