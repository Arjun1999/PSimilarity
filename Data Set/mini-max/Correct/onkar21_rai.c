#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long *arr = malloc(sizeof(long long) * 5);
    long long b[5], s=0;
    for(int i = 0; i < 5; i++)
    {
       scanf("%lld",&arr[i]);
       s = s + arr[i];
    }
    for(int i = 0; i < 5; i++)
    {
       b[i] = s - arr[i];
    }
    long long min = b[0], max = b[0];
    for(int i = 0; i < 5; i++)
    {
      if(b[i]<min)
          min = b[i];
      if(b[i]>max)
          max = b[i];
    }
    printf("%lld %lld", min, max);
    return 0;
}
