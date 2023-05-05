#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int t,x,a[3],i,j,c=0;
    scanf("%d",&t);

    for ( i = 0; i < t; i++)    //test case
    {
        scanf("%d",&x);     //the key i have
        for ( j = 0; j < 3; j++) //getting 3 keys behind the doors
        {
            scanf("%d",&a[j]);
        }

        int index = x-1;
        for ( j = 0; j < 3; j++)
        {
            if(a[index]==0 && c!=2)
                {
                    break;
                }
            else
            {
                c++;
                index = a[index]-1;
            }
        }

        if(c==3)
            printf("YES\n");
        else
            printf("NO\n");

        c = 0;
    }
    

    return 0;
}