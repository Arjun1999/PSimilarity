#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long getMax(int* arr){
    long prev = 0;
    for(int iter = 0; iter < 5; iter++){
        prev = fmax(prev,arr[iter]);
    }return prev;
}

long getMin(int* arr){
    long prev = 1;
    for(int iter = 0; iter < 5; iter++){
        prev = fmin(prev,arr[iter]);
    }return prev;
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long max = 0;
    long min = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    max = getMax(arr);
    min = getMin(arr);
    long long genSum = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       if(arr[arr_i] != min && arr[arr_i]!=max)
           genSum+=arr[arr_i];
    }printf("%lld %lld",min+genSum,max+genSum);
    return 0;
}
