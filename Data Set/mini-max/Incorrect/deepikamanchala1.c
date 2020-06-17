#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,sum,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,max=0,min=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(i=0;i<5;i++){
        sum=sum+arr[i];
    }  
    sum1=sum-arr[0];
    sum2=sum-arr[1];
    sum3=sum-arr[2];
    sum4=sum-arr[3];
    sum5=sum-arr[4];
         min=sum1;
         max=sum1;
    if(min>sum2)
        min=sum2;
    if(max<sum2)
        max=sum2;
    if(min>sum3)
        min=sum3;
    if(max<sum3)
        max=sum3;
    if(min>sum4)
        min=sum4;
    if(max<sum4)
        max=sum4;
    if(max<sum5)
        max=sum5;
    
    printf("%d\t",min);
    printf("%d",max);
    return 0;
}
