#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    fgets(a,5,stdin); // can have 4 char with null '\0'
    // a[3]='\0';
    printf("%s",a);
    return 0;
}