#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int largest=0;
    int smallest =2147483647;
    long int sum=0;      
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        if(largest <= arr[arr_i])
            largest = arr[arr_i];
        if(smallest >= arr[arr_i])
            smallest = arr[arr_i];
        sum = sum+ arr[arr_i];
         
    }
    printf("%ld %ld",sum-largest,sum-smallest);  
        
    
    return 0;
}
