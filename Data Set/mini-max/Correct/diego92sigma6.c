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
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        minIndex = arr[i] < arr[minIndex] ? i : minIndex;
        maxIndex = arr[i] > arr[maxIndex] ? i : maxIndex;
    }
    long minSum = 0, maxSum = 0;
    for (int i = 0; i < 5; i++) {
        if(i != minIndex){
            maxSum += arr[i];
        }
        if(i != maxIndex){
            minSum += arr[i];
        }
    }
    printf("%ld %ld",minSum, maxSum);
    return 0;
}
