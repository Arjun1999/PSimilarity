#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int *arr = malloc(sizeof(long int) * 5);
    int arr_i;
    for(arr_i = 0; arr_i < 5; arr_i++){
       scanf("%li",&arr[arr_i]);
    }
   long int max=arr[0],min=arr[0],s=0;
    for(arr_i = 0; arr_i < 5; arr_i++){
        if(arr[arr_i]>max)
        {
        max=arr[arr_i];
        }
        if(arr[arr_i]<min)
        {
        min=arr[arr_i];
        }
        s=s+arr[arr_i];
        }
   long int s1=s;
    printf("%li ",s=s-max);
    printf("%li",s1=s1-min);
    return 0;
}