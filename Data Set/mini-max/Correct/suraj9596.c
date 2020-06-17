#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5],sum=0,max[5],min[5],i;
    for(i=0;i<5;i++)
        {
          scanf("%lld",&a[i]);
          sum = sum+a[i];
        }
    for(i=0;i<5;i++)
        {
           max[i] = sum - a[i];
           min[i]= sum - a[i];
        }
    
    for(i=1;i<5;i++)
        {
    if(max[0]<max[i])
        max[0]=max[i];
     if(min[0]>min[i])
         min[0]=min[i];
    
    }
    printf("%lld %lld",min[0],max[0]);
    
    
    return 0;
}
