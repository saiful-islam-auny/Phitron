#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

long long int max_sum(int arr[], int size, int k)
{
    int i,j,temp;
    long long int sum=0;

    for ( i = 0; i < size; i++)  //sorting descending order
    {
        for ( j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for ( i = 0; i < k; i++)    //sum of k element
    {
        if(arr[i]<0)
            return sum;
        else
            sum+=arr[i];
    }
    return sum;

}

    int main()
    {
        int n, k, i;
        scanf("%d %d", &n, &k);
        int a[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("%lld", max_sum(a,n, k));

        return 0;
    }