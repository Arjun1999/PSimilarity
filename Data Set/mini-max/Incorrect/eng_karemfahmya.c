#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
    int min = arr[0],max=arr[0];
    int i,sum=0;
    for (i=0;i<arr_size;i++)
    {
        if(min>arr[i])
        {
            min= arr[i];
            //l=i;
        }
        if(max<arr[i])
        {
            max=arr[i];
           // m=i;
        }
        
       sum +=arr[i];     
    }
   printf("Max sum = %d \n min sum = %d \n",sum-min,sum-max);
    
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
