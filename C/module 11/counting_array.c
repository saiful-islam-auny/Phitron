#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int a[100],n,i,j;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int cnt[6]={0};

    for ( i = 0; i < n; i++)
    {
        int val = a[i];
        cnt[val]++;
    }

    for ( i = 0; i <=5; i++)
    {
        printf("%d - %d\n",i,cnt[i]);
    }
    
    
    return 0;
}