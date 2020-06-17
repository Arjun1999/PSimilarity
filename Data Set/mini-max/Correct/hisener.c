#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void insertionSort (long long int* arr, long long int n);

int main () {
    long long int array[5];
    scanf("%lld %lld %lld %lld %lld",
          array, array + 1, array + 2, array + 3, array + 4);
    insertionSort(array, 5);
    
    printf("%lld ", array[0] + array[1] + array[2] + array[3]);
    printf("%lld", array[1] + array[2] + array[3] + array[4]);
    return 0;
}

void insertionSort (long long int* arr, long long int n) {
   int i, key, j;
   for (i = 1; i < n; i++) {
       key = arr[i];
       j = i-1;
 
       while (j >= 0 && arr[j] > key) {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
