#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
  long long int sum[5],max,min,maxs,mins,x;
    int i;
    for(i=0;i<5;)
     {   scanf("%lld",&x);
      if(x>=1&&x<=pow(10,9))
          {
          sum[i]=x;
          i++;
      }
     }
    max=min=sum[0];
    for(i=0;i<5;i++)
        {
        if(max<sum[i])
            max=sum[i];
         if(min>sum[i])
            min=sum[i];
    }
    maxs=sum[0]+sum[1]+sum[2]+sum[3]+sum[4]-min;
    mins=sum[0]+sum[1]+sum[2]+sum[3]+sum[4]-max;
    printf("%lld %lld",mins,maxs);
    
        
}
