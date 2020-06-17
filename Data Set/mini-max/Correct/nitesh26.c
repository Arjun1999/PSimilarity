#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    unsigned long *arr = malloc(sizeof(unsigned long) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lu",&arr[arr_i]);
    }
    unsigned long arr_j[5];
    unsigned long sum = arr[0] + arr[1] + arr[2] + arr[3]; 
    unsigned long sum1 = arr[1] + arr[2] + arr[3] + arr[4];
    unsigned long sum2 = arr[0] + arr[2] + arr[3] + arr[4]; 
    unsigned long sum3 = arr[0] + arr[1] + arr[3] + arr[4];
    unsigned long sum4 = arr[0] + arr[1] + arr[2] + arr[4];
    arr_j[0]= sum;
    arr_j[1]= sum1;
    arr_j[2]= sum2;
    arr_j[3]= sum3;
    arr_j[4]= sum4;
    unsigned long max = arr_j[0];
    unsigned long min = arr_j[0];
    for(int i=0; i<5; i++)
    {
        /* If current element of array is greater than max */
        if(arr_j[i]>max)
        {
            max = arr_j[i];
        }

        /* If current element of array is smaller than min */
        if(arr_j[i]<min)
        {
            min = arr_j[i];
        }
    }
    printf("%lu %lu", min,max);
    return 0;
}
