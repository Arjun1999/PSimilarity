#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    int i;
    int sum=0;
    int max=0;
    int min=99999;
    int *a=malloc(sizeof(int)*5);
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    for(i=0;i<5;i++)
    {
        a[i]=sum-(i+1);
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("%d %d",min,max);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
