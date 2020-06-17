#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    int arr1[5];
    int i=0,max=0;
    arr1[0]=arr[1]+arr[2]+arr[3]+arr[4];
    arr1[1]=arr[0]+arr[2]+arr[3]+arr[4];
    arr1[2]=arr[0]+arr[1]+arr[3]+arr[4];
    arr1[3]=arr[0]+arr[1]+arr[2]+arr[4];
    arr1[4]=arr[1]+arr[2]+arr[3]+arr[0];
    
    for(i=0;i<5;i++)
    {
        if(arr1[i]>arr1[i+1])
        {
        max=arr1[i];
    }
}
    printf("%d",max);
}
    // Complete this function

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
