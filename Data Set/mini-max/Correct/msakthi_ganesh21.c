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
    }
    
    int i,j;
    int temp;
    
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    long long int min=0;
    long long int max=0;
    for(i=0;i<4;i++){
        max=(long long int)max+arr[i];
    }
    for(i=4;i>0;i--){
        min=(long long int)min+arr[i];
    }
    
    printf("%lld %lld", min,max);
    return 0;
}
