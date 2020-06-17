#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,sum,k=0,b[5];
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(i=0;i<5;i++)
    {
        sum=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       if(arr[arr_i]!=k)
       {
           sum=sum+arr[arr_i];
       }
    }
        b[k]=sum-1;
        k++;
    }
    printf("%d %d",b[4],b[0]);
    return 0;
}
