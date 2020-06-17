#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    int i, j;
    long int max = arr[0], min = arr[0];
    long int mx=0, mn=0, sum=0;
    for(i=0;i<5;i++){
        if(max < arr[i])max = arr[i];
    }
    for(i=0;i<5;i++){
        if(min > arr[i])min = arr[i];
    }
    for(i=0;i<5;i++){
       sum += arr[i];
    }
    mx = sum - min;
    mn = sum- max;
    
    
    printf("%li %li", mn, mx);
    return 0;
}
