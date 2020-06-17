#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void swap(int* a,int* b);
int main() {
    int *arr=malloc(sizeof(int) * 5);
    long int temp=10^9;
    long int min_sum=0,max_sum=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for (int arr_i=0;arr_i<5;arr_i++)
    {
        for (int count=arr_i+1;count<5;count++)
        {
            if (arr[arr_i]>arr[count])
            {
                swap(&arr[arr_i],&arr[count]);
            }
        }
    }
    for(int arr_i = 0; arr_i < 4; arr_i++)
    {
        min_sum=min_sum+arr[arr_i];
    }
    for(int arr_i = 1; arr_i < 5; arr_i++)
    {
        max_sum=max_sum+arr[arr_i];
    }
    printf("%ld %ld",min_sum,max_sum);
    free(arr);
    return 0;
}

void swap(int* a,int* b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}