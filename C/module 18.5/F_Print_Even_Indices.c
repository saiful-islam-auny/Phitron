#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

void even_index(int a[], int index)
{
    if(index<0) return;
    if(index%2==0)
        printf("%d ",a[index]);
    even_index(a,index-1);
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    even_index(a,n-1);
    
    return 0;
}