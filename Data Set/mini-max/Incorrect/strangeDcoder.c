#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
    int sum=0;
    int i,j;
    for(i=0;i<=arr_size;i++)
    {
        arr[i]=0;
        for(j=0;j<=arr_size;j++)
        {
            sum+=arr[j];
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
