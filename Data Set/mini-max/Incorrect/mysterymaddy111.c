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
    int n,i,large=0,small=0;
    long max,min;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     large=small=a[0];
     for(i=1;i<n;i++)
     {
         if(a[i]<small)
         small=a[i];
         if(a[i]>large)
         large=a[i];
     }
        small=a[0];
        for(i=1;i<n;i++)
        {
            min=min+a[i];
            printf("%d\n",min)
        }
        large=a[0];
        for(i=1;i<n;i++)
        {
            max=max+a[i];
            printf("%d\n",max);
        }
        return 0;
}