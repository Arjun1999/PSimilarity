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
    int n,i;
    long long int sum=0,max=0,min=0,b,max1,min1;
    scanf("%d",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
   
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    b=max;
     for(i=0;i<n;i++)
    {
        if(a[i]<b)
        {
            min=a[i];
            b=a[i];
        }
     }
     min1=sum-max;
     max1=sum-min;
      printf("%lld %lld",min1,max1); 
       
    }
    

