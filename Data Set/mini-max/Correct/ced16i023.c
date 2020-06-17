#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int total=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        total=total+arr[arr_i];
    }
    int temp,i,j;
    long int max, min;
    for(i=4;i>0;i--)
        for(j=0;j<i;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
       max=total-arr[0];
    min=total-arr[4];
    printf("%ld %ld",min,max);
    return 0;
}
