#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int count_odd(int a[],int size)
{
    int odd=0;
    for ( i = 0; i < size; i++)
    {
        if(a[i]%2!=0)
            odd++;
    }
    return odd;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("%d",count_odd(a,n));
    


    return 0;
}