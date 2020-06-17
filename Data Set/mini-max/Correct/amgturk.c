#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int sum=0;
    long int max;
    long int min;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       sum=sum+arr[arr_i];       
    }
        max=sum-arr[0];
        min=sum-arr[0];
    for(int i=1;i<5;i++){
        
        if(sum-arr[i]>max)
            max=sum-arr[i];
        if(sum-arr[i]<min)
            min=sum-arr[i];
        
    }
    
    printf("%ld %ld",min,max);
        
    return 0;
}
