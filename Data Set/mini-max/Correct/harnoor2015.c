#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long min=1000000001;
long max=0;
long total1,total2;
long sum=0;

int main() {
    //int *arr = malloc(sizeof(int) * 5);
    //    for(int arr_i = 0; arr_i < 5; arr_i++){
    int arr[5];
    for(int i=0;i<5;i++){
       scanf("%d",&arr[i]);        
    };
    for(int i=0;i<5;i++){
        if(arr[i]>max) {
           max=arr[i];
       };         
       sum=sum+arr[i];
    };
    for(int i=0;i<5;i++){
        if(arr[i]<min) {
           min=arr[i];            
       }; 
    };
    total1=sum-max;
    total2=sum-min;
    printf("%ld %ld",total1,total2);
    return 0;
}
