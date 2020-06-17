#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
     
       for(int arr_i=0;arr_i<5;arr_i++)
       {
           int temp;
           if(arr_i>arr_i+1)
           {
               temp=arr_i;
               arr_i=arr_i+1;
               arr_i+1=temp;
           }
       }
     long int sum_max=arr_1+arr_2+arr_3+arr_4;
    long int sum_min=arr_0+arr_1+arr_2+arr_3;
    printf("%lld %lld",sum-max,sum-min);
    return 0;

}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
