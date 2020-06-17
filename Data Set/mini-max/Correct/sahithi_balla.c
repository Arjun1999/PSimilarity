#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int *arr = malloc(sizeof(long long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }
    long long int i , j , sum = 0, max = 0, min = 0;
    for(i = 0; i < 5; i++)
        sum = sum + arr[i];
    min = sum;
    for(i = 0; i < 5; i++)
        arr[i] = sum - arr[i]; 
    for(i = 0; i < 5; i++){
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("%lld ",min);
    printf("%lld",max);
        
    return 0;
}
