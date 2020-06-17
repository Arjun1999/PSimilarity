#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long arr[5];
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }  
    long min=arr[0],max=arr[0],sum=0;
    for(int i=0;i<5;i++){
        if(min>arr[i])
            min=arr[i];
        if(max<arr[i])
            max=arr[i];
        sum+=arr[i];
    }
    
    printf("%ld %ld",sum-max,sum-min);
    
    return 0;
}
