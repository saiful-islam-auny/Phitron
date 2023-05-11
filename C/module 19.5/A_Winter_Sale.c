#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    float org_p,x,p;
    scanf("%f %f",&x,&p);

    org_p = p/(1-(x/100));
    printf("%.2f",org_p);

    return 0;
}