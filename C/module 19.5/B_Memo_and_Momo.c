#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int a, b, k;
    scanf("%d %d %d", &a, &b, &k);

    if (a % k == 0 && b % k == 0)
        printf("Both");
    else if (a % k == 0 && b % k != 0)
        printf("Memo");
    else if (a % k != 0 && b % k == 0)
        printf("Momo");
    else
        printf("No one");

    return 0;
}