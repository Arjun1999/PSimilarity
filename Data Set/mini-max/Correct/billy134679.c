#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    long int max=0;
    long int min= LONG_MAX;
    int count=4;
    
    for(int i = 0; i < 5; i++){
       long int c=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
      
       if(arr_i==count)
           continue;
        else{
           
            c+=arr[arr_i];
            }
        
    }
      count--;
     if( c >= max )
            max=c;
     if( min >=c  )
            min=c;
    
    }
    printf("%ld %ld ",min , max);
    return 0;
}
