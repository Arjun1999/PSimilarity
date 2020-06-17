#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long arr[5];
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    long long sum1, sum2, sum3, sum4, sum5, max, min;
    sum1=arr[1]+arr[2]+arr[3]+arr[4];
    sum2=arr[0]+arr[2]+arr[3]+arr[4];
    sum3=arr[0]+arr[1]+arr[3]+arr[4];
    sum4=arr[0]+arr[1]+arr[2]+arr[4];
    sum5=arr[0]+arr[1]+arr[2]+arr[3];
    if(sum1>=sum2 && sum1>=sum3 && sum1>sum4 && sum1>sum5){
        max=sum1;
    }
        if(sum2>=sum1 && sum2>=sum3 && sum2>=sum4 && sum2>=sum5){
        max=sum2;
    }
        if(sum3>=sum2 && sum3>=sum1 && sum3>=sum4 && sum3>=sum5){
        max=sum3;
    }
        if(sum4>=sum2 && sum4>=sum3 && sum4>=sum1 && sum4>=sum5){
        max=sum4;
    }
        if(sum5>=sum2 && sum5>=sum3 && sum5>=sum4 && sum5>=sum1){
        max=sum5;
    }
        if(sum1<=sum2 && sum1<=sum3 && sum1<=sum4 && sum1<=sum5){
        min=sum1;
    }
        if(sum2<=sum1 && sum2<=sum3 && sum2<=sum4 && sum2<=sum5){
        min=sum2;
    }
        if(sum3<=sum2 && sum3<=sum1 && sum3<=sum4 && sum3<=sum5){
        min=sum3;
    }
        if(sum4<=sum2 && sum4<=sum3 && sum4<=sum1 && sum4<=sum5){
        min=sum4;
    }
        if(sum5<=sum2 && sum5<=sum3 && sum5<=sum4 && sum5<=sum1){
        min=sum5;
    }
    printf("%llu %llu", min, max);
    return 0;
}
