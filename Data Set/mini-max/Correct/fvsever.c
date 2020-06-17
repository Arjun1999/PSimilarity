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
    double sum_full = 0;
    double num_low = arr[0];
    double num_high = arr[0];
    for (int i=0; i<5; i++) {
        sum_full += arr[i];
        if (num_low > arr[i]) {
            num_low = arr[i];
        }
        if (num_high < arr[i]){
            num_high = arr[i];
        }
    }
    printf("%.0f %.0f", (sum_full-num_high), (sum_full-num_low));
    return 0;
}
