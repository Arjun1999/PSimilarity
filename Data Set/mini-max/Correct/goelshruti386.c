#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    unsigned long int min = pow(10,10);
    unsigned long int max =0,sum = 0;
    
    for(int k=0;k<5;k++)
    {
        int i = k;
        int j = (k+4)%5;
        sum = 0;
        for(;i!=j;)
        {
            sum += arr[i]; 
            i = (i+1)%5;
        }
        
        //printf("%ld ",sum);
    
        if (sum < min){
            min = sum;
        }
            
        if (sum > max){
            max = sum;
        }
            
    }
    printf("%lu %lu",min,max);
    
    return 0;
}
