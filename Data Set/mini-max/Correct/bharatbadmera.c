#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int ma=0;
    long int mi=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    
    if(min==max){
        for(int i=0;i<4;i++){
            ma=(long int)ma+arr[i];
            mi=(long int)mi+arr[i];
        }
        printf("%ld %ld",mi,ma);
    }else{
    for(int i=0;i<5;i++){
        if(arr[i]!=max){
            mi=(long int)mi+arr[i];
        }
        if(arr[i]!=min){
            ma=(long int)ma+arr[i];
        }
    }
    printf("%ld %ld",mi,ma);
    }
    return 0;
}
