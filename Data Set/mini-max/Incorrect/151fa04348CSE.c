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
    int n,i,min=999,max=-999,sum=0,sum1=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  sum=sum+a[i];
       for(i=0;i<n;i++)
        sum1=sum-a[i];
      for(i=0;i<n;i++)
      {
        sum=sum1-a[i];
          if(sum>max)
              max=sum;
          else
              min=sum;
      }
    printf("%d %d",min,max);

}