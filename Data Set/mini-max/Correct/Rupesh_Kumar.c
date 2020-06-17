#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int *arr = malloc(sizeof(long long int) * 5);
    long long int min=0,max=0,i,j,temp;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
        
    }
    for(i=0;i<5;i++){
        for(j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            
            }
        }
      }
    for(i=0;i<5-1;i++)
        min+=arr[i];
    for(i=1;i<5;i++)
        max+=arr[i];
    printf("%lld %lld",min,max);
    return 0;
}
