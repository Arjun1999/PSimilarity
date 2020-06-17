#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int *arr, int size) {
    int min = 0;
    for(int i=0; i<size; i++) {
        min = i;
        for(int j=i; j<size; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(&arr[i], &arr[min]);
    }
}

void print_min_max_sum (int *arr, int size){
    long int min_sum=0, max_sum=0;
    selection_sort(arr, size);
    for(int i=0; i<size-1; i++) {
        min_sum = min_sum + arr[i];
    }
    for(int j=1; j<size; j++) {
        max_sum = max_sum + arr[j];
    }
    printf("%ld %ld", min_sum, max_sum);
    
}

int main() {
    int n = 5;
    int *arr = malloc(sizeof(int) * n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    print_min_max_sum(arr, n);
    return 0;
}
