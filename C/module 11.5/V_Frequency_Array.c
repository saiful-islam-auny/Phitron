#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    int a[n], cnt[m+1];

    for ( i = 1; i <=m; i++)
    {
        cnt[i]=0;
    }
    

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        int val = a[i];
        cnt[val]++;
    }

    for ( i = 1; i <=m; i++)
    {
        printf("%d\n",cnt[i]);
    }
    
    
    return 0;
}