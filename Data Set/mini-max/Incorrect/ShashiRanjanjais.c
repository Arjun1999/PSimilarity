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
    };
    int sum1,sum2,i,j,min;
    min=arr[0];
    for(j=0;j<5;j++){
    for(i=1;i<5;i++){
        if(arr[i]=min){
            min=arr[i];
        }else if(arr[i]<min){
            min=arr[i];
        };};
        arr[j]=min;
        min=arr[j+1];
    };
    for(i=0;i<4;i++){
        sum1=sum1+arr[i];
    };
    printf("%d",sum1);
    for(i=1;i<5;i++){
        sum2=sum2+arr[i];
    };
    printf("%d",sum2);
    return 0;
}
