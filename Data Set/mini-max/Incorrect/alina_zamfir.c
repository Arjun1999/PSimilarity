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
    int sumMin = 0;
    int sumMax = 0;
    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i]<min){
            sumMin = sumMin + min;
            min = arr[i];
        }
        else
            sumMin = sumMin + arr[i];
        if(arr[i]>max){
            sumMax = sumMax + max;
            max = arr[i];
        }
        else
            sumMax = sumMax = arr[i];
    }
    printf("%d %d", sumMax, sumMin);
    return 0;
}
