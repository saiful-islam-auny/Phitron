#include<stdio.h>
#include<string.h>

int fun(char ar[])
{
    return strlen(ar);
}

int main()
{
    char ar[20]="Hello";
    printf("%s\n", ar);
    printf("%d\n", fun(ar));
    return 0;
}
