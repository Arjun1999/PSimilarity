#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
   
    int a[5],i,j;
   
    long long int sum=0,min,max ;
    max=1;
    min=1<<31-1;
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    
    
        if(a[i]>max)
        {
            max = a[i];
        }
 
        if(a[i]<min)
        {
            min = a[i];
        }
    }
 
   
    
    
      printf("%lld %lld ", sum-max,sum-min);
return 0;}
    
    
   
    
    
    
    
