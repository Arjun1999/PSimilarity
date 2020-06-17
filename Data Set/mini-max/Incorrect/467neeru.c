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
   int n,i,a[100],max=0,min=0;
   int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    for(i=1;i<n;i++)
    {
      if(a[i]>max)
      {
          max=a[i];
      }
      if(a[i]<min)
      {
          min=a[i];
      }
    }
 
  printf("%d %d",sum-max,sum-min);
} 

