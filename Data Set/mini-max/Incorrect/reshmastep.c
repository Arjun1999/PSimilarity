#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int n, int* arr) {
    // Complete this function
    int min = 0;
    int max = 0;
    for(int i = 0;i < n-1; i++)
        for(int j = 0; j< n-i-1; j++)        
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;              
                   
            } 
    for(int i =0 ; i<5; i++)
        printf("%d",arr[i]);
    
    for(int i =0 ; i<4; i++)
        min = min + arr[i];
    for(int j = 4 ; j>0; j--)
        max = max + arr[j];
    printf("\n %d %d \n",min,max);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
