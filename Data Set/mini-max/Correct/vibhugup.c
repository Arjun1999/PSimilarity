#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long long int max,min,temp,sum,total_sum=0;
    max=0;
    sum=temp=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        total_sum+=arr[arr_i];
    }
    min=total_sum;
    for(int i=0;i<5;i++)
        {
        if(arr[i] < 1 || arr[i]>1000000000)
            return 0;
        
        temp=total_sum;
        temp-=arr[i];
        if(temp>max)
            max=temp;
        if(temp<min)
            min=temp;
    }
    printf("%llu\t%llu",min,max);
    
    return 0;
}
