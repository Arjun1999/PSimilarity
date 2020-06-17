#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc (const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    qsort(arr, 5, sizeof(int), cmpfunc);
    long unsigned int lowsum = 0, highsum = 0;
    
    for (int i = 0; i < 4; i++)
    {
        lowsum += arr[i];
        highsum += arr[i+1];
    }
    
    printf("%li %li", lowsum, highsum);
    
    return 0;
}
