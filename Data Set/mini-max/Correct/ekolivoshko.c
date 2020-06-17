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
    
    long int i, max = arr[0], min = arr[0], sum=0;
    for (i=0; i<5; i++){
        arr[i] > max ? max = arr[i] : 0;
        arr[i] < min ? min = arr[i] : 0;
        sum += arr[i];
    }
    
    printf ("%ld %ld\n", sum - max, sum - min);
    return 0;
}
