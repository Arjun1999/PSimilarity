#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    size_t arr_bytes = sizeof(int) * 5;
    int *arr = malloc(arr_bytes);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    int *high = malloc(arr_bytes);
    int *low = malloc(arr_bytes);
    high = memcpy(high,arr,arr_bytes);
    low = memcpy(low,arr,arr_bytes);
    long hi = 0;
    long lo = LONG_MAX;
    for(int i = 0; i < 5; i++){
        if(arr[i] < lo)
            lo = arr[i];
        if(arr[i] > hi)
            hi = arr[i];
    }
    for(int i = 0; i < 5; ++i){
        if(high[i]==lo){
            high[i] = 0;
            break;
        }
    }
    for(int i = 0; i < 5; ++i){
        if(low[i]==hi){
            low[i] = 0;
            break;
        }
    }
       // hi and lo will now store the sums. 
        hi = 0;
        lo = 0;
    for(int i = 0; i < 5; ++i){
      hi += high[i];
        lo += low[i];
        } 
    
    printf("%ld %ld",lo,hi);
        free(high);
        free(low);
    free(arr);
    return 0;
}
