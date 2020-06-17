#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() { 
   unsigned long long int n[5],max,min,sum=0;
    int i;
    scanf("%lld",&n[0]);
    max=n[0];
    min=n[0];
    sum=n[0]+sum;
    for(i=1;i<5;i++)
    {
        scanf("%lld",&n[i]);
        if(max<n[i])
            max=n[i];
        if(min>n[i])
            min=n[i];
        sum=sum+n[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
    }
  