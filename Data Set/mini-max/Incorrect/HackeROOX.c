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
    int max_sum = 0;
    for(int arr_i = 1; arr_i < 5; arr_i++){
        max_sum = max_sum + arr_i;
    }
    int min_sum = 0;
    for(int arr_i = 0; arr_i < 4; arr_i++){
        min_sum = min_sum + arr_i;
    }
    printf("%d %d",&min_sum, &max_sum);
    return 0;
}
