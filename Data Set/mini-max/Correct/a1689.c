#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int sum=0,min=0,max=0,m;
    long int *arr = malloc(sizeof(int) * 5);
    for(long int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    for(long int arr_i=0;arr_i<5;arr_i++)
    {
        sum=sum+arr[arr_i];
    }
    for(long int arr_i=0;arr_i<5;arr_i++)
    {
        m=sum-arr[arr_i];
        if(arr_i==0)
            max=min=m;
        if(m>max)
            max=m;
        if(m<min)
            min=m;
        
    }
    printf("%ld %ld",min,max);
    
    return 0;
}
