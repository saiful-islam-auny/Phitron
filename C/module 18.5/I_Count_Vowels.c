#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int count_vow(char a[], int i, int count)
{
    if(a[i]=='\0')  return count;
    if(a[i]=='a' || a[i]=='A' ||a[i]=='e' ||a[i]=='E' ||a[i]=='i' ||a[i]=='I' ||a[i]=='o' ||a[i]=='O' ||a[i]=='u' ||a[i]=='U')
    {
        count++;
    }
    count_vow(a,i+1,count);
}

int main()
{
    char a[201];
    fgets(a,201,stdin);

    printf("%d",count_vow(a,0,0));

    return 0;
}