#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char c;
    int cnt[26]={0},i;

    while ( scanf("%c",&c)!= EOF)
    {
        int val = c-97;
        cnt[val]++;
    }

    for ( i = 0; i < 26; i++)
    {
        if(cnt[i]!=0)
        {
            printf("%c : %d\n",i+97,cnt[i]);
        }
    }
    
    return 0;
}