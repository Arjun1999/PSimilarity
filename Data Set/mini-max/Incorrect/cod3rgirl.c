#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int sum(int arr[]){
    int i, max=0,min=1,max_sum,min_sum,sum=0;
    for(i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(i=0;i<5;i++){
        sum=sum+arr[i];
    }
    min_sum=sum-max;
    max_sum=sum-min;
    printf("%d ",min_sum );
    printf("%d ",max_sum);
    return 0;
    
}
int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
    }
    sum(arr);
    return 0;
}
