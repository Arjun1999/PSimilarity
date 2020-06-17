#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long sum=0;
    for(int i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
        sum =sum+arr[i];
    }
    int max = arr[0];
    for(int j=1;j<5;j++)
        {
        if(arr[j]>max)
            max=arr[j];
    }
    int min = arr[0];
    for(int j=1;j<5;j++)
        {
        if(arr[j]<min)
            min=arr[j];
    }
    printf("%ld %ld",(sum-max),(sum-min));
    
    return 0;
}
