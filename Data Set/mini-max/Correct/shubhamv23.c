#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int arr[5], sum=0; 
    int min = INT_MAX;
    int max = INT_MIN;
 
    for(int i=0 ; i<5 ; i++)
       {
       scanf("%ld",&arr[i]);
       if(arr[i] > max)
           max = arr[i];
       if(arr[i] < min) 
           min = arr[i];
       sum = sum + arr[i];
       }
    
    printf("%ld %ld", sum-max, sum-min);

    return 0;
}
