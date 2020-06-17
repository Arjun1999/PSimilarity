#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int temp,i=0,a[5],min=0,max=0,j;
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<=2;j++)
    {
        for(i=0;i<=4;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(i=1;i<=4;i++)
    {
        max=max+a[i];
    }
    for(i=0;i<=3;i++)
    {
        min=min+a[i];
    }
    printf("%d\t%d",min,max);
    return 0;
}
