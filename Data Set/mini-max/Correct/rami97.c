#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int *arr = malloc(sizeof(long long int) * 5);
    int i,j;
    long long int temp,min=0,max=0;
    for(i = 0;i < 5;i++){
       scanf("%lld",&arr[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<4;i++)
        min=min+arr[i];
    for(i=1;i<5;i++)
        max=max+arr[i];
    printf("%lld %lld",min,max);
    
    return 0;
}
