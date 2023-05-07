#include<stdio.h>
int main()
{
    // char a[6]={'R','a','h','a','t'}; // no gurantee
    char a[5]="Auny"; // 5 because the string "Auny" which has 4 characters plus a null character \0
    // int sz=sizeof(a)/sizeof(char);
    // printf("%d\n",sz);
    printf("%c\n",a[0]);
    printf("%c\n",a[1]);
    printf("%c\n",a[2]);
    printf("%c\n",a[3]);
    printf("%c\n",a[4]); //null char 
    printf("%c\n",a[5]); 
    printf("%s",a);
    return 0;
}