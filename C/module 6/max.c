#include <stdio.h>

int main()
{
    int i,n,max=0,test;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&test);
        if(test>max)
        {
            max = test;
        }
    }
    printf("%d",max);
    return 0;
}