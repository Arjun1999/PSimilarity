#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long sum(int n, long *arr, long exclude){
   long sum = 0;
   int count = 1;
   for(int i = 0; i  != n; i++){
       if(count == 1 && arr[i] == exclude){
           count = 0;
       }else{
           sum += arr[i];
       }
   }
    return sum;
}
long max(int n, long *arr){
    long max = arr[0];
    for(int i = 1; i != n; i++){
        max = arr[i] >= max? arr[i] : max;
    }
    return max;
}
long min(int n, long *arr){
    long min = arr[0];
    for(int i = 1; i != n; i++){
        min = arr[i] <= min? arr[i] : min;
    }
    return min;
}
int main() {
    long *arr = malloc(sizeof(long) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }
    printf("%lld %lld",sum(5, arr, max(5, arr)), sum(5, arr, min(5, arr)));
    return 0;
}
