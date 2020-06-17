#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int sum=0,min=1,max=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        if(1<=arr[arr_i]<=pow(10,9)){
            
            sum=sum+arr[arr_i];
            if(min>arr[arr_i])
                  min=arr[arr_i];
            if(max<arr[arr_i])
                max=arr[arr_i];
        }
        else
            return 0;
    }
    
    int min_sum=abs(sum-max);
    int max_sum=abs(sum-min);
    printf("%d%d",min_sum,max_sum);
    
    return 0;
}
