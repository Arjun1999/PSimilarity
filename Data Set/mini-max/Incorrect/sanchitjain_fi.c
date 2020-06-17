#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    int m, i;
    int g;
    int n[arr_size];
    for(i=0;i<=arr_size;i++){
        m=arr[i]+m;
    }
    for(i=0;i<=arr_size;i++){
        n[i]=m-arr[i];
    }
    for(i=0;i<=arr_size;i++){
        g=(n[i]>g)? n[i]:g;
    }
    return g;
    // Complete this function
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
