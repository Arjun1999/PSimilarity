#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int max = 0;
    int min = 0;
    long long int sum = 0;
        
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       //printf ("%d",arr[arr_i]);
        if(arr_i == 0) {
            max = arr[arr_i];
            min = arr[arr_i];
        } else {
            if(max < arr[arr_i]) {
                max = arr[arr_i];
            }
            if(min > arr[arr_i]) {
                min = arr[arr_i];
            }
        }  
        sum += arr[arr_i];
    }
    printf("%lld %lld",(long long int) (sum - max), (long long int) (sum - min));
    
    return 0;
}
