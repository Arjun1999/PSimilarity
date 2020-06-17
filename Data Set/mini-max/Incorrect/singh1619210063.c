#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int max=0,min=0,arr_i;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
       scanf("%d",&arr[arr_i]);
    }
    for(arr[arr_i]=2;arr[arr_i]<=5;arr[arr_i]++)
    {
        max=max+arr[arr_i];
        
    }
    for(arr[arr_i]=1;arr[arr_i]<=4;arr[arr_i]++)
    {
        min=min+arr[arr_i];
    }
    printf("%d %d",min,max);
    
    
        return 0;
}
