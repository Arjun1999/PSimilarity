#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int total=0;
    int min=0,max=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        
        if(arr_i==0)
            min=arr[arr_i];
                
       total+=arr[arr_i];
       min=arr[arr_i]<min?arr[arr_i]:min ;
       max=arr[arr_i]>max?arr[arr_i]:max ;
    }
    printf("%ld %ld",total-max,total-min);
    
    
    return 0;
}
