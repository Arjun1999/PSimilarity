#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5),i; long int sum=0,min,max;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
   for(i=0;i<5;i++)
   {
       sum=sum+arr[i];
   }
   min=sum-arr[0];
    max=sum-arr[0];
    for(i=1;i<5;i++)
    {
        if(sum-arr[i]>min)
        {
            min=sum-arr[i];
        }
        if(sum-arr[i]<max)
        {
            max=sum-arr[i];
        }
    }
    printf("%ld ",max);
    printf("%ld ",min);
    
 
    return 0;
}
