// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>
// #include <ctype.h>
// #include <string.h>
// #include <limits.h>
// #include <math.h>

// int maximum(int a[], int n, int index, int max)
// {
//     if (index == n)
//         return max;
//     if (a[index] > max)
//         max = a[index];

//     maximum(a, n, index + 1, max);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     int i, j;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("%d", maximum(a, n, 0, INT_MIN));

//     return 0;
// }


#include<stdio.h>
#include<limits.h>
int fun(int a[],int n,int i)
{
    if(i==n)
    {
        return INT_MIN;
    }
    int mx=fun(a,n,i+1);
    if(a[i] > mx)
    {
        return a[i];
    }
    else 
    {
        return mx;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int mx=fun(a,n,0);
    printf("%d\n",mx);
    return 0;
}