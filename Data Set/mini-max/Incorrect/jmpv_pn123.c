#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
  int n=5,i,a[n],sum=0,d;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
  for(i=0;i<n;i++)
      {
      d=0;
      sum=sum+a[i]-a[d];
      printf("%d",sum);
      d++;
      }
    return 0;
}
