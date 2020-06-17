#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long int a[4];
    int i;
    long int sum=0;
    long int min,max,sum_min,sum_max;
    for(i=0;i<=4;i++)
        {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<=4;i++)
        {
        sum=sum+a[i];
    }
    min=max=a[0];
    for(i=0;i<=4;i++)
        {
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
    }
    sum_min=sum-max;
    sum_max=sum-min;
    printf("%lld %lld",sum_min,sum_max);
        
    
    return 0;
}
