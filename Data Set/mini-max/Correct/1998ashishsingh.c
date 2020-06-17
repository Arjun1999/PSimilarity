#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i;
   unsigned long long int a[5],min,max=0,sum=0,sum1,sum2;
    for(i=0;i<5;i++){
        scanf("%lld",&a[i]);
    }
    min=a[0];
    for(i=0;i<5;i++){
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
        sum=sum+a[i];
        
    }
    sum1=sum-max;
    sum2=sum-min;
    printf("%lld %lld",sum1,sum2);
  
    
}
