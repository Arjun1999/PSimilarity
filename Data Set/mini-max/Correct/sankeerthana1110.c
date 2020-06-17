#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

   int main(){
    long long int a[5],sum=0;
    long long int i;
   
    scanf("%lld",&a[0]);
    long long int max=a[0];
    long long int min=a[0];
    sum=a[0]+sum;
    
    for(i=1;i<5;i++){
        scanf("%lld",&a[i]);
       
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
         sum=sum+a[i];
    }
  printf("%lld %lld",sum-max,sum-min);
    return 0;
    }
