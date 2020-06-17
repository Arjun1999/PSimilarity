#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int sum=0,min,max;
    int i;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       sum = sum + arr[arr_i];
    }
    
    min = max = (sum - arr[0]);
    
    for(i=1; i<5; i++) {
        if(min > (sum - arr[i])) {
            min = (sum - arr[i]);
        }
        if(max < (sum - arr[i])) {
            max = (sum - arr[i]); 
        }
    }
    
    printf("%ld %ld",min,max);
    return 0;
}
