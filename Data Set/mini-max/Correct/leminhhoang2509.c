#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int *arr = malloc(sizeof(long long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    long int i,j,temp, max = arr[0], min = arr[0], sum = arr[0];
    for (i=1;i<=4;i++) {
        if (arr[i]>max) 
            max = arr[i];
        if (arr[i]<min) 
            min = arr[i];
        sum += arr[i];
    }
    printf("%lld ", sum - max);
    printf("%lld", sum -min);
    
    return 0;
}
