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
    int n,i,j,sum=0,swap;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=n-i;j>i;j--)
        {
            sum+=a[j];
            b[i]=sum;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(b[j]>b[j+1])
            {
                swap=a[j];
                b[j]=b[j+1];
                b[j+1]=swap;
            }
        }
    }

    printf("%d %d",b[0],b[n-1]);
}

