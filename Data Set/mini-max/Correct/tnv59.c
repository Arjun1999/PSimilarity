#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long sum = 0;
    long max = 0;
    long min = 99999999999;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(j != i){
                sum += arr[j];
            }
        }
        if(sum > max){
            max = sum;
        }
        if(sum < min){
            min = sum;
        }
        sum = 0;
    }
    printf("%ld %ld\n", min, max);
    return 0;
}
