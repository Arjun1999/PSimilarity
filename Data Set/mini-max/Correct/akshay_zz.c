#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int arr[5],max_no=0,min_no=1,max_sum=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    max_no=arr[0];
    min_no=arr[0];
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
           max_sum += arr[arr_i];
        if(max_no<arr[arr_i])
        {
            max_no=arr[arr_i];
        }
        if(min_no>arr[arr_i])
        {
            min_no=arr[arr_i];
        }
    }
    
    printf("%ld ",max_sum-max_no);
    printf("%ld",max_sum-min_no);
    
    return 0;
}
