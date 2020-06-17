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
    int a[1000],sum=0;
    int minimum=a[0],maximum=a[0];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<5;i++)
     {
     if(a[i]<maximum)
        {
            maximum=a[i];
        }
         if(a[i]>minimum)
        {
            minimum=a[i];
        }
        sum+=a[i];
     }
    printf("%d %d",sum-minimum,sum-maximum-1);
    return 0;
}
