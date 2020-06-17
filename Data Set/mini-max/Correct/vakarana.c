#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,j;
    long long int temp_sum = 0;
    long long int min = 9223372036854775807;
    long long int max = 0;
    
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    
    for(i=0;i<5;i++) {
        temp_sum = 0;
        for(j=0;j<4;j++) {
            temp_sum += arr[(i+j)%5];
        }
        if(temp_sum > max) {
            max = temp_sum;
        }
        if(temp_sum < min) {
            min = temp_sum;
        }
    }
    printf("%lld %lld", min, max);
    return 0;
}
