/* 
 * minMaxSum.c
 * @zblankinship
 * Program to find sum of smallest and sum of largest elements in array.
 */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define SIZE 5 

int main() {
    int *arr = malloc(sizeof(int) * SIZE);
    for(int arr_i = 0; arr_i < SIZE; arr_i++){
       scanf("%d",&arr[arr_i]);
    }

    long int temp;
    
    // Sort array by ascending
    for(int i = 0; i < SIZE; i++){
        for(int j = i+1; j < SIZE; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    long int min[SIZE-1];
    long int max[SIZE-1];
    long int sumOfMin = 0;
    long int sumOfMax = 0;

    // Grab smallest
    for(int i = 0; i < SIZE-1; i++){
        min[i] = arr[i];
        //printf("%d ", min[i]); // DEBUG
        sumOfMin += min[i];
    }

    // Grab largest
    for(int i = SIZE-1; i > 0; i--){
        max[i] = arr[i];
        //printf("%d ", max[i]); // DEBUG
        sumOfMax += max[i];
    }

    printf("%ld %ld\n", sumOfMin, sumOfMax);

    return 0;
}

