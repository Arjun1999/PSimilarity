#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int *arr = malloc(sizeof(long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    long int min=arr[0];
    long int max=arr[0];
    int mini=0;
    int maxi=0;
    long int sum=0;
    for(int i=0;i<5;i++)
        sum=sum+arr[i];
    for(int i=1;i<5;i++)
     {   if(arr[i]>=max)
         {max=arr[i];
             maxi=i;
         }
         else if(arr[i]<=min)
         {
             min=arr[i];
             mini=i;
         }
    }
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
