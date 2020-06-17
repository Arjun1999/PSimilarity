#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long a[100000],max=0,i,min=1000000000,s; 
    for(i=0;i<5;i++){
        scanf("%lld",&a[i]);
           if(a[i]>max) 
               max=a[i];
           if(a[i]<min)
              min=a[i];
        }
         s=a[0]+a[1]+a[2]+a[3]+a[4];
          printf("%lld %lld",s-max,s-min);
              
    
    
    return 0;
}
