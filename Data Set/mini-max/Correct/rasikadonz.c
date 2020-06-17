#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int min = 0, max = 0, sum = 0, num = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    for(int j = 0; j < 5; j++) {
        sum += arr[j];
    }
 
    for(int i = 0; i< 5; i++) {
        num = sum - arr[i];
        if(i == 0){
            min = max = num;
        }
        if(num < min)
            min = num;
        else if(num > max)
            max = num;
    }
       
    
    printf("%ld %ld", min, max);
    
    return 0;
}
