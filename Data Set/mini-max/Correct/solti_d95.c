#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int max=0,min=INT_MAX,i=0;
    long long int maxs=0,mins=0,sum=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(i;i<5;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
        sum+=arr[i];


    }
    maxs=sum-min;
    mins=sum-max;
    printf("%lld %lld",mins,maxs);
    return 0;
}
