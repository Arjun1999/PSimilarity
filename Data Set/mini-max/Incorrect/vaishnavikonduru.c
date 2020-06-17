#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) 
{
    int min=0,max=0;
    for(i=0;i<arr_size;i++)
    {
        if(arr[i]<max)
        {
            max=arr[i];
        }
        if(arr[i]>min)
        {
            min=arr[i];
        }
        
    }
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
