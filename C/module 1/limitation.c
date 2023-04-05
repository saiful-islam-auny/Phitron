#include <stdio.h>

int main()
{
    int a=1000000000; // 4 byte = 2^32 range
    float b=10.000005; // 4 byte = 2^32 range
    double c=10.999999999999998; // 8 byte = 2^64 range

    printf("%d\n",a);
    printf("%.6f\n",b); // can take 6 digit after .
    printf("%.15lf\n",c);   // can take 15 digit after .
    return 0;
}