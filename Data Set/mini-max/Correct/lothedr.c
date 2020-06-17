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
    unsigned long int sum = 0;
    int min = 0x7FFFFFFF;
    int max = 0;
    for (int i = 0; i < 5; ++i)
    {
        sum += arr[i];
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    printf("%ld %ld", sum - max, sum - min);
    return 0;
}
