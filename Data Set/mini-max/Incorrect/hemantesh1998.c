#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int i,arr_j,temp,sum,diff;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
       for(int arr_i = 0; arr_i < 5; arr_i++){
           temp=arr[arr_i];
           arr_j=arr_i-1;
           while((temp<arr[arr_j])&&(arr_j>=0))
           {
               arr[arr_j+1]=arr[arr_j];
               arr_j=arr_j-1;               
           }
           arr[arr_j+1]=temp;
       }
           for(int arr_i = 4; arr_i >0; arr_i--){
           sum=sum+arr[arr_i];
           }
        for(int arr_i = 0; arr_i < 4; arr_i++){
               diff=diff+arr[arr_i];
               }
    printf("%d  %d",diff,sum);
    return 0;
}
