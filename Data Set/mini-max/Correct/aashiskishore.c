#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define LEN 5

int main() {
    int *arr = malloc(sizeof(int) * LEN);
    for(int arr_i = 0; arr_i < LEN; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    long int sum = 0, max, min;
    for(int i = 0; i < LEN; i++) {
        sum = sum + arr[(LEN + i + 1) % LEN] + arr[(LEN + i + 2) % LEN] + arr[(LEN + i + 3) % LEN] + arr[(LEN + i + 4) % LEN];
        if(i > 0) {
            if(sum > max)
                max = sum;
            if(sum < min)
                min = sum;
        }
        else
            max = min = sum;
        sum = 0;
    }
    printf("%ld %ld\n", min, max);
    return 0;
}
