#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    int sum=0,sum1=0,sum2=0,sum4=0,sum3=0,i;
    for(i=1;i<5;i++)
        sum=sum+arr[i];
    //printf("%d",sum);
     for(i=0;i<5;i++){
         if(i==1)
             i++;
         sum1=sum1+arr[i];
     }
   // printf("\n%d",sum1);
    for(i=0;i<5;i++){
         if(i==2)
             i++;
         sum2=sum2+arr[i];
     }
     //printf("\n%d",sum2);
    for(i=0;i<5;i++){
         if(i==3)
             i++;
         sum3=sum3+arr[i];
     }
    // printf("\n%d",sum3);
    for(i=0;i<5;i++){
         if(i==4)
             i++;
         sum4=sum4+arr[i];
     }
   
//    printf("%d",greatest);
     if(sum4<sum&&sum4<sum1&&sum4<sum2&&sum4<sum3){
         printf("%d",sum4);
    }
    if(sum>sum1&&sum>sum2&&sum>sum3&&sum>sum4){
         printf("\t%d",sum);
    }
    // Complete this function
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
