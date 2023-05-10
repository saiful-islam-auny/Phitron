#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

void print_recursion(int n)
{
    if(n==0) return;
    print_recursion(--n);
    printf("I love Recursion\n");

}

int main()
{
    int n;
    scanf("%d",&n);
    print_recursion(n);

    return 0;
}