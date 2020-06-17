#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
  long long int a[5]; 
  long long int minsum=9999999999;
  long  long int maxsum=0,b;
    int i,j;
    long int sum=0;
    for(i=0;i<5;i++)
        {
    scanf("%lld ",&a[i]);
    }
    for(j=0;j<5;j++)
        {
        sum=0;
        b=a[j];
    for(i=0;i<5;i++)
        {
        if(i!=j)
            {
            sum=sum+a[i];
        }
    }
          if(sum>maxsum)
            {
            maxsum=sum;
        }
         if(sum<minsum)
            {
            minsum=sum;
        }
    }
    printf("%lld %lld",minsum,maxsum);
    return 0;
}
