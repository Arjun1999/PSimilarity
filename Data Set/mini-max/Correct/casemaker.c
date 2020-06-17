#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long  *arr = malloc(sizeof(long long ) * 5);
    for(long long  arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }
    long long max  = -1;
    long long min  = -1;
    long long temp = 0;
    
    for(long long arr_i = 0; arr_i < 5; arr_i++)
    {
        temp = arr[0]+arr[1]+arr[2]+arr[3]+arr[4]-arr[arr_i];
        if(temp > max)
            max = temp;
        if(temp < min || min < 0)
            min = temp;
    }
    printf("%lld %lld", min, max);
    return 0;
}
