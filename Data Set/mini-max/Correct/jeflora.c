#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main() {
    long int *arr = malloc(sizeof(long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    long int max_sum = 0, min_sum = 0;
    
    qsort(arr, 5, sizeof(long int), cmpfunc);
    
    for(int i = 0; i < 5; ++i) {
        if(i != 0) max_sum += arr[i];
        if(i != 4) min_sum += arr[i];
    }
    
    printf("%ld %ld", min_sum, max_sum);
    
    return 0;
}
