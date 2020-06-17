#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int arr[5];
    int max=arr[0];
    int min=arr[0];
       int sum=0;
    int i;
    
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<5;i++){
        if(arr[i] > max){
            max=arr[i];
        } else if(arr[i]<min){
            min = arr[i];
        }
        sum = sum+arr[i];
    }
    printf("%d %d",sum-max,sum-min);
    
    return 0;
}