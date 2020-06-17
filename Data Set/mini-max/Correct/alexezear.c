#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long sum = 0;
    int min;
int max;
 
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        if(arr_i==0){
            max= arr[arr_i];
            min = arr[arr_i];
        }
        if(arr[arr_i]>max)
            max = arr[arr_i];
        if(arr[arr_i]<min)
            min = arr[arr_i];
        sum = sum+ arr[arr_i];
    }
    printf("%ld %ld", sum-max, sum-min);
    return 0;
}
