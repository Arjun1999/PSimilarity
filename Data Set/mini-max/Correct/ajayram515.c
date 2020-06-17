#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int arr_i,j,a;
    long int *arr = malloc(sizeof(long int) * 5);
    for(arr_i = 0; arr_i < 5; arr_i++){
       scanf("%li",&arr[arr_i]);
    }
    for (arr_i = 0; arr_i < 5; ++arr_i)
    {
        for (j = arr_i + 1; j < 5; ++j)
        {
            if (arr[arr_i] > arr[j])
            {
                a =  arr[arr_i];
                arr[arr_i] = arr[j];
                arr[j] = a;
            }
        }
    }
    printf("%li ",arr[0]+arr[1]+arr[2]+arr[3]);
    printf("%li",arr[1]+arr[2]+arr[3]+arr[4]);
    return 0;
}
