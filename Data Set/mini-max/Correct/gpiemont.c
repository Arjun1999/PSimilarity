#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    unsigned long long int sum = 0;
    unsigned long long int max_sum = 0;
    unsigned long long int min_sum = 999999999999999;
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    for (int black = 0; black < 5 ; black++ ) {
        for (int arr_i = 0; arr_i < 5; arr_i++) {
            if (arr_i != black) {
                sum += arr[arr_i];
            }
        }
        
        if (sum > max_sum) {
            max_sum = sum;
        }
        if (sum < min_sum) {
            min_sum = sum;
        }
        sum = 0;
    }
    
    printf("%llu %llu\n", min_sum, max_sum);
    return 0;
}
