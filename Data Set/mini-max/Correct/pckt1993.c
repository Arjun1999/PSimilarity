#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void insert_sort ( int *a ) {
    int i, key, j;
    for ( i = 1; i < 5; i++ ) {
        key = a[i];
        j = i-1;
        while ( j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
    }
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    insert_sort(arr);
    long min = 0, max = 0;
    for(int i = 0; i < 4; i++) {
        min += arr[i];
    }
    for(int i = 1; i < 5; i++) {
        max += arr[i];
    }
    printf ( "%lu %lu", min, max);
    return 0;
}
