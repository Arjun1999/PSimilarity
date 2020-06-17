#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int sum = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
   }
    
    long int sum_array[5] = {};
   
    for(int count = 0; count < 5; count++){
        
        for (int j = 0; j < 5; j++){
            if (count!= j){
                sum_array[count] = sum_array[count] + (long int)arr[j];
            }  
        }  
    }
    
    long int max;
    long int min;
   
    /* calculate the maximum and minimum value in the array */
     if(sum_array[0]>sum_array[1]) {
         max = sum_array[0];
         min = sum_array[1];
     }else{
         max = sum_array[1];
         min = sum_array[0];
     }

    for(int index = 2; index < 5; index++){
        /*calculate the maximum number in the array */
        if(max < sum_array[index]){
            max = sum_array[index];
        }
        /*calculate the minumum number in the array */
        if(min > sum_array[index]){
            min = sum_array[index];
        }
        
    }
    
    printf("%ld %ld",min,max);
    return 0;
}
