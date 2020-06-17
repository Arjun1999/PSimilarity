#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int msum=0,minsum=0;
    for(int j=0;j<5;j++)
    {
        if(a[j+1]>a[j])
        {   msum+=a[j+1];
            minsum+=a[j];
        }
        if(j==4)
            minsum-=a[j+1];
    }
    printf("%d\t%d",minsum,msum);
}