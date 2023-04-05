#include <stdio.h>

int main()
{
    int a=5,b=6,c=5;

    printf("%d\n",a<b && a<c);  //t and f  = f 
    printf("%d\n",a>b && a==b); //f and f = f
    printf("%d\n",a<=c && b>c); //t and t = t
    printf("%d\n",a>=c || a>b); //t or f = t
    printf("%d\n",a!=c || c>b); //f or f = f
    return 0;
}   