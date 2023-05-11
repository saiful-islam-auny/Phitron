#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int count(int arr[], int size)
{
    int count = 1, freq=arr[0],i,j;
    for ( i = 1; i < size; i++)
    {
        if(arr[i]==freq)
            count++;
    }
    return count;

}

int sort(int arr[], int size)
{
    int i,j,temp;

    for ( i = 0; i < size-1; i++)  //sorting ascending order
    {
        for ( j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    count(arr,size);
}

int main()
{
        int n, i, got;
        scanf("%d", &n);
        int a[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        got = sort(a,n);
        if(got%2==0)
            printf("Unlucky");
        else
            printf("Lucky");

    return 0;
}