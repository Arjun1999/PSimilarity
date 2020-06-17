#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int sum=0,sum1,sum2,sum3,sum4,sum5,small,large;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
     for(int arr_i = 0; arr_i < 5; arr_i++){
         {
             sum=sum+arr[arr_i];
         }
     sum1=sum-arr[0];
     sum2=sum-arr[1];
     sum3=sum-arr[2];
     sum4=sum-arr[3];
     sum5=sum-arr[4]; 
         int *arr1 = malloc(sizeof(int) * 5);
         *arr1={sum1,sum2,sum3,sum4,sum5};
      small=sum1;
        
         for(int i=1;i<5;i++)
         {
             if(small>arr1[i]);
             small=arr1[i];
         }
       large=sum1;
         for(int i=1;i<5;i++)
         {
             if(large<arr1[i]);
             large=arr1[i];
         }
         printf("%d%d",small,large);
          
         
         
         
    
    return 0;
}

