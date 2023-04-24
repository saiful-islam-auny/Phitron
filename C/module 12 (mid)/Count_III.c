#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char s[1001];
    int i,cnt[26]={0};

    scanf("%s",s);
    for ( i = 0; i < strlen(s); i++)
    {
        int val = s[i]-97;
        cnt[val]++;
    }

    for(i=0; i<26; i++)
    {
        printf("%c - %d\n",i+97,cnt[i]);
    }
    
    return 0;
}