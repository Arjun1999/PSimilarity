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
    int k;
    long int sum1=0,sum2=0;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        if(arr[j]>arr[j+1])
        {
           k=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=k;
        
    }
    for(int i=0;i<5;i++){
        if(i!=0)
        sum2+=arr[i];
        if(i!=4)
            sum1+=arr[i];}
    printf("%ld %ld",sum1,sum2);
    return 0;
}
