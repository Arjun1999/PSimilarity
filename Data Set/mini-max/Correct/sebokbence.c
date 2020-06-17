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
    long int sum = 0;
    long int array[5];
    int index = 0;
    for(int i = 0; i < 5; i++)
    {
        sum = 0;
        for(int j = 0; j < 5; j++)
        {
            if(j != i)
            {
                sum += arr[j];
            }
        }
        //printf("%d ", sum);
        array[index++] = sum;
    }
    long int min = array[0];
    long int max = array[0];
    for(int i = 0; i < 5; i++)
    {
        if(array[i] > max) { max = array[i]; }
        if(array[i] < min) { min = array[i]; }
    }
    printf("%ld %ld", min, max);
    return 0;
}
