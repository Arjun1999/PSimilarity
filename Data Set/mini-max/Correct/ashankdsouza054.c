#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}


int main() {
    long int min=0;
    long int max=0;
    long int arr_i;
    long int *arr = malloc(sizeof(int) * 5);
    for(arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);  
    }
    qsort(arr,5,sizeof(long int),cmpfunc);
    //for(arr_i = 0; arr_i < 5-1; arr_i++)printf("%d ",arr[arr_i]);
        
    for(arr_i = 0; arr_i < 5-1; arr_i++)
        min+=arr[arr_i];
     for(arr_i = 1; arr_i < 5; arr_i++)
        max+=arr[arr_i];    
    printf("%ld %ld\n",min,max);
    return 0;
}
