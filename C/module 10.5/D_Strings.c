#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char a[100],b[100],temp;
    int i,j;
    scanf("%s %s",a,b);

    printf("%d %d\n",strlen(a),strlen(b));
    printf("%s%s\n",a,b);

    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    
    printf("%s %s",a,b);
   
    return 0;
}