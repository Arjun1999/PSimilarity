#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
    long int min=0
    long int max=0;
    int i=0;
    int j=1;
    for(i=0;i<arr_size-1;i++)
    {
        min=min+arr[i];
    }
    for(j=1;j<=arr_size-1;j++)
    {
        max=max+arr[j];
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
