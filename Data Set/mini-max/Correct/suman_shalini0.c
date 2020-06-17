#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   long long int arr[5];
   long long int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,max=0,min=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }
    sum1=arr[0]+arr[1]+arr[2]+arr[3];
    sum2=arr[0]+arr[1]+arr[2]+arr[4];
    sum3=arr[0]+arr[1]+arr[3]+arr[4];
    sum4=arr[0]+arr[2]+arr[3]+arr[4];
    sum5=arr[4]+arr[1]+arr[2]+arr[3];
    if(sum1 > sum2 && sum1 > sum3 && sum1 > sum4 && sum1 > sum5)
        {
        max=sum1;
    }else
    
    if(sum2 > sum1 && sum2 > sum3 && sum2 > sum4 && sum2 > sum5)
        {
        max=sum2;
    }else
    
    if(sum3 > sum1 && sum3 > sum2 && sum3 > sum4 && sum3 > sum5)
        {
        max=sum3;
    }else
    
    if(sum4>sum1 && sum4>sum2 && sum4 > sum3 && sum4 > sum5)
        {
        max=sum4;
    }else
    if(sum5>sum1 && sum5>sum2 && sum5 > sum3 && sum5 > sum4)
        {
        max=sum5;
    }
    
    if(sum1 < sum2 && sum1 < sum3 && sum1 < sum4 && sum1 < sum5)
        {
        min=sum1;
    }else
    
    if(sum2 < sum1 && sum2 < sum3 && sum2 < sum4 && sum2 < sum5)
        {
        min=sum2;
    }else
    
    if(sum3 < sum1 && sum3 < sum2 && sum3 < sum4 && sum3 < sum5)
        {
        min=sum3;
    }else
    
    if(sum4<sum1 && sum4<sum2 && sum4 < sum3 && sum4 < sum5)
        {
        min=sum4;
    }else
    if(sum5<sum1 && sum5<sum2 && sum5 < sum3 && sum5<sum4)
        {
        min=sum5;
    }
    else if(sum1== sum2 && sum1==sum3 && sum1==sum4 && sum1==sum5){
        max=sum1;
        min=sum1;
    }
    printf("%lld %lld",min,max);
}
