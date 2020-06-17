#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int min , max ;
    long long int sum1=0 , sum2=0 ;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    min=arr[0];
    max=arr[0];
    for(int i=0 ; i<5 ; i++){
        if(arr[i] > max)
          max = arr[i] ;
         if(arr[i]< min)
            min = arr[i] ;
         }
         for (int i=0 ; i<5 ; i++)
         {
             sum1= sum1+arr[i];
         }
         sum2=sum1-min ;
         sum1=sum1-max ;
         printf("%lld %lld",sum1,sum2);
    return 0;
}


