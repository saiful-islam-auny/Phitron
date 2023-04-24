#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,i=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    
    int sum=0;
    while(s[i]!='\0')
    {
        sum+=s[i]-48;
        i++;
    }
    printf("%d",sum);

    return 0;
}