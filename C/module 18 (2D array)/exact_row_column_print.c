#include<stdio.h>
int main()
{
    int row,col,i,j;
    scanf("%d %d",&row,&col);
    int a[row][col];

    for( i=0;i<row;i++)
    {
        for( j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    } 

    // exact row
    int e;
    scanf("%d",&e);
    for( i=0;i<col;i++)
    {
        printf("%d ",a[e][i]);
    }
    printf("\n");
    // exact column
    int c;
    scanf("%d",&c);
    for( i=0;i<row;i++)
    {
        printf("%d\n",a[i][c]);
    }
    return 0;
}