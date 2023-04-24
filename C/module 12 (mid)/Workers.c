#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int m1,m2,d,d2;
    scanf("%d %d %d",&m1,&m2,&d);
    
    d2 = (m1*d)/m2; 
    printf("%d",d2);
    return 0;
}