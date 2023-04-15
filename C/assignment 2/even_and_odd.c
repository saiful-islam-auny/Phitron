#include <stdio.h>

int main()
{
    int n,e=0,o=0,i,test;
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&test);

        if(test%2==0)
        {
            e+=test;
        }
        else
        {
            o+=test;
        }
    }
    printf("%d %d",e,o);
    
    return 0;
}