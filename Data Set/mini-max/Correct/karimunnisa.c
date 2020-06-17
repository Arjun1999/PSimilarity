#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    unsigned long long int arr[5],min,max,sum=0,arr_i;
    scanf("%lld",&arr[0]);
    min=arr[0];
    max=arr[0];
    sum=arr[0]+sum;

    for( arr_i = 1; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
        if(min<arr[arr_i])
            min=arr[arr_i];
        if(max>arr[arr_i])
            max=arr[arr_i];
        sum=sum+arr[arr_i];
    }
    printf("%lld %lld",sum-min,sum-max);
    return 0;
}
