#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],max,min,t;
    scanf("%lld",&a[0]);
    t=max=min=a[0];
   for(int i=1;i<5;i++)
       {
       scanf("%lld",&a[i]);
       if(min>a[i])
           min=a[i];
       if(max<a[i])
           max=a[i];
       t=t+a[i];
   }
    
    printf("%lld %lld",t-max,t-min);
    return 0;
}
