#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    
    long min, max;
    int *arr = malloc(sizeof(int) * 5);
    
    min = 0;
    max = 0;
    
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    
    for(int i=0;i<5;i++){
        long sum = 0;
        for(int j=0;j<5;j++){
            if(j != i){
                sum += arr[j];                   
            }
        }
        
        if(sum < min || min == 0){
            min = sum;
        }
        
        if(sum > max){
            max = sum;
        }
        
    }
    
    printf("%ld %ld",min,max);

    
    return 0;
}
