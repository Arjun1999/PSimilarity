#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   long long int temp,max,min;
   long long int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }
    temp=arr[0]+arr[1]+arr[2]+arr[3];
    min=temp;
    max=temp;
    
    temp=arr[0]+arr[1]+arr[2]+arr[4];
    if(temp>max)
        max=temp;
    else
        min=temp;
    
    temp=arr[0]+arr[1]+arr[3]+arr[4];
    if(temp>max)
        max=temp;
    if(temp<min)
        min=temp;
    
    temp=arr[0]+arr[2]+arr[3]+arr[4];
    if(temp>max)
        max=temp;
    if(temp<min)
        min=temp;
    
    temp=arr[1]+arr[2]+arr[3]+arr[4];
    if(temp>max)
        max=temp;
    if(temp<min)
        min=temp;
    
    printf("%lld %lld",min,max);
    return 0;
}
