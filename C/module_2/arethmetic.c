#include <stdio.h>

int main()
{
    int a=5,b=12;
    float div = b*1.0/a;    //float/int or int/float
    float mod = b%a;

    printf("%f\n",div);
    printf("%f\n",mod);
    return 0;
}