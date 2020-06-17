#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
 int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    long sum = 0; 
    for(int i = 0; i < 5; i++)
    {
        sum = arr[i] + sum;
    }
    
    long lowest = sum, new_lowest = 0, highest = 0;
    for(int j = 0; j < 5; j++)
    {
        long a = sum - arr[j];
        
        if(a < lowest)
        {
            lowest = a;
            new_lowest = a;
        }
        if(a > highest) 
        {
            highest = a;
        }
    }
    
    printf("%ld %ld", new_lowest, highest);
    return 0;
}
