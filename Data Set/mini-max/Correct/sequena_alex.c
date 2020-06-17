#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long max = 0,min = 0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
        long long sum;
        for(int arr_j = 0; arr_j < 5; arr_j++){
            if(arr_j != arr_i){
                sum+=arr[arr_j];
            }    
        }
        if(arr_i == 0){
            min = sum;
        }
        
        if(sum>max){
            max = sum;
        }
        
        if(sum<min){
            min = sum;
        }
        sum = 0;  
    }
    printf("%lli %lli",min,max);
    return 0;
}
