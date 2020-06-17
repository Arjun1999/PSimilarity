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
    int i,n;
   int arry[n];
    scanf("%d",&arry[0]);
   int max=arry[0],min=arry[0],sum=arry[0]+sum,summax=0,summin=0;

    for(i=1;i<n;i++)
    {
        scanf("%d",&arry[i]);
        if(max<arry[i])
        max=arry[i];
     if(min>arry[i])
        min=arry[i];
        summax = sum+max;
       summin = sum+min;
    }
    printf("%d %d",summax,summin);
    return 0;

}
