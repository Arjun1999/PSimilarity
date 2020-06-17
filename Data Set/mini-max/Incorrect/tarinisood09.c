#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    int min=0,max=0;
    int n=arr_size;
    for(int arr_i=0;arr_i<=n-1;arr_i++)
    {
        min=min + arr_i;
        
    }
    for(int arr_i=1;arr_i<=n;arr_i++)
    {
        max=max+arr_i;
    }
    printf("%d %d",min,max-1);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
