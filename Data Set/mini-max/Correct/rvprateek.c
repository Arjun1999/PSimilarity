#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long int a[10],sum=0,swap,max=0,min=0;
    int i,j;
    for(i=0;i<5;i++)
    {
    scanf("%lld\t",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    for (i=0 ; i<5; i++)
  {
    for (j=0 ; j<4-i; j++)
    {
      if (a[j] > a[j+1])
      {
        swap = a[j];
        a[j] = a[j+1];
        a[j+1] = swap;
      }
    }
  }
      max=sum-a[0];
      min=sum-a[4];
  printf("%lld\t%lld",min,max);
    
  return 0;
}

