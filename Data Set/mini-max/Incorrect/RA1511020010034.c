#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
    int ar[arr_size],sum=0,k=0,temp,i,j;
    for(i=0;i<arr_size;i++){
        for(j=0;j<arr_size;j++){
        if(arr[j]!=arr[k]){
            sum+=arr[j];
        }
      }
        ar[k]=sum;
        sum=0;
        k++;
    }
    for(i=0;i<arr_size;i++){
        for(j=0;j<arr_size;j++){
            if(arr[i]>arr[j]){
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    int min = ar[0];
    int max = ar[arr_size-1];
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
