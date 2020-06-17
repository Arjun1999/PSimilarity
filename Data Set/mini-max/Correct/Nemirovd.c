#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    long int low = LONG_MAX, high = LONG_MIN;
    
    for(int i = 0; i < 5; ++i){
        long int sum = 0;
        for(int k = 0; k < 5; ++k){
            if(i == k) continue;
            sum += arr[k];
        }
        high = sum > high ? sum : high;
        low  = sum < low  ? sum : low ;
    }
    
    printf("%ld %ld\n", low, high);
    return 0;
}
