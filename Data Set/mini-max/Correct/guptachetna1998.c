#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int max,min;
    int k_max,k_min,i;
    long int sum_max=0,sum_min=0;
    long int *arr = malloc(sizeof(long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    min=arr[0];
    k_min=0;
    max=arr[0];
    k_max=0;
    for(i=0;i<5;i++)
        {
        if(arr[i]<min)
            {
            min=arr[i];
            k_min=i;
        }
        if(arr[i]>max)
            {
            max=arr[i];
        k_max=i;
        }
        }
    for(i=0;i<5;i++)
        {
        if(i!=k_min)
    sum_max=sum_max+arr[i];
        if(i!=k_max)
            sum_min=sum_min+arr[i];
    }
    printf("%ld %ld",sum_min,sum_max);
    return 0;
}
