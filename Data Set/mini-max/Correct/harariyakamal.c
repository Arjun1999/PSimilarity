#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int minSum = 0;
    long int maxSum = 0; 
    
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d", &arr[arr_i]);
    }
    
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < 5; i++) {
        if (i == 0 || i == 5 - 1) {
            if (i == 0) {
                minSum = minSum + arr[i];
            } else {
                maxSum = maxSum + arr[i];
            }
        } else {
            maxSum = maxSum + arr[i];
            minSum = minSum + arr[i];
        }
    }
    printf("%ld", minSum);
    printf(" ");
    printf("%ld", maxSum);
    return 0;
}
