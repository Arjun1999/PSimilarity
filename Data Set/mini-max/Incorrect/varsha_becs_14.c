#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
    /*int i=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,min,max;
    
    sum1=arr[1]+arr[2]+arr[3]+arr[4];
    sum2=arr[0]+arr[2]+arr[3]+arr[4];
    sum3=arr[0]+arr[1]+arr[3]+arr[4];
    sum4=arr[0]+arr[1]+arr[2]+arr[4];
    sum5=arr[0]+arr[2]+arr[3]+arr[1];*/
    
    unsigned long max = arr[0];
unsigned long min = arr[0];
unsigned long total = 0;
for (int i = 0; i < arr_size; i++)
{
    if (arr[i] > max) 
        max = arr[i];
    if (arr[i] < min)
        min = arr[i];
    total+=arr[i];
}
printf("%ul %ul", total - max, total - min);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
