#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long sum;
    long min=sum;
    long max=sum;
    for(int arr_i = 0; arr_i < 5; arr_i++)
       scanf("%d",&arr[arr_i]);
    for(int arr_i=0;arr_i<5;arr_i++)
    {
        sum=sum+arr_i;
    }
    for(int arr_i=0;arr_i<5;arr_i++)
    {
        int temp=sum-arr_i;
        if(temp<min)
            min=temp;
        if(temp>max)
           max=temp;
    } 
        
    printf("%ld %ld",min,max);
    return 0;
}
