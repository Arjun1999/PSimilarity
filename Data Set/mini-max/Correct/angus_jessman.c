#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void bubble_incr(int * ar, int n){
    // in place switching
    bool isDirty;
    int temp;
    int count = 0;
    do{
        // reset dirty
        isDirty = false;
        for(int i = 0; i < n-1; i++){
            // check if i+1 is < i+0
            if(ar[i+1] < ar[i+0]){
                // swap in place
                temp = ar[i+0];
                ar[i+0] = ar[i+1];
                ar[i+1] = temp;
                // set dirty
                isDirty = true;
                // counter
                count++;
            }
        }
    }
    while(isDirty);
}

long sum_range(const int * ar, int low, int high){
    long accum = 0;
    for(int i = low; i <= high; i++)
        accum += ar[i];
    return accum;
}

int main() {
    // get input
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }

    // order increment
    bubble_incr(arr, 5);
    
    // print result
    printf("%ld %ld\n", sum_range(arr, 0, 3), sum_range(arr, 1, 4));
    
    // return
    return 0;
}
