#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    static int i,minsum=0,maxsum=0;
    int a[5]={1,2,3,4,5};
    for(i=0;i<4;i++)
    {
        minsum=minsum+a[i];
    }
    printf("%d ",minsum);
    

    for(i=1;i<=4;i++)
    {
        maxsum=maxsum+a[i];
    }
    printf("%d",maxsum);
    
}
