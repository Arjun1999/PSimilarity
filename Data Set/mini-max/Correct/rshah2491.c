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
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            if(arr[i]>arr[j])
            {
                long int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    long int sumMin=0;
    long int sumMax=0;
    for(int i=0;i<4;i++)
        sumMin+=arr[i];
    for(int i=1;i<5;i++)
        sumMax+=arr[i];
    printf("%ld %ld",sumMax,sumMin);
    return 0;
}
