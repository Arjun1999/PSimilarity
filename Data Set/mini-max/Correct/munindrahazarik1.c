#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

 main(){
    long long int a[5];
    int i;
    long long int max=0,min=0,sum=0;
    
    
    for(i=0;i<5;i++)
        scanf("%lld",&a[i]);
      max = a[0];
      min = a[0];
        i = 0;
    while (i < 5) {
        
        if (a[i] > max) 
               max = a[i];
        if (min > a[i]) 
              min = a[i];
        i++;
            
    }
    sum = a[0] + a[1] + a[2] + a[3] + a[4];
    printf("%lld %lld", sum-max, sum-min);
   
}