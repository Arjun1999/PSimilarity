#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int temp;
    long  min=0,max=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
     for(int arr_i = 0; arr_i < 5; arr_i++){
         if(arr_i != 0)
             max=max+arr[arr_i];
         if(arr_i !=4)
             min=min+arr[arr_i];
     }
    printf("%ld %ld",min,max);
  
    return 0;
}
