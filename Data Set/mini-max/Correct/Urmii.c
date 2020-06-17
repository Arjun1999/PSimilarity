#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int *arr = malloc(sizeof(long int) * 5);
    long int max=-1000000000000,min=99999999999999,sum=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lu",&arr[arr_i]);
    if(arr[arr_i]>max)max=arr[arr_i];
        if(arr[arr_i]<min)min=arr[arr_i];
        sum+=arr[arr_i];
    }
    printf("%lu %lu",sum-max,sum-min);
    return 0;
}
