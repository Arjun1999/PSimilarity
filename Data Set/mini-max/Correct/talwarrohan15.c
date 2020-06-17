#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int arr[5],max,min,mx_sum,mn_sum,ts;
    
    int i;
    
    for(i=0,ts=0,min=1000000000,max=0;i<5;i++)
           {scanf("%lld",&arr[i]);
            if(arr[i]>max)
                 max=arr[i];
            if(arr[i]<min)
                min=arr[i];
            ts=ts+arr[i];
             } 
    mn_sum=ts-max;
    mx_sum=ts-min;
    printf("%lld %lld",mn_sum,mx_sum);
    
    return 0;
}
