#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int min=1000000000, max=0,sum=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        
        if(max<(*(arr+arr_i)))
        {
         max=(*(arr+arr_i));   
        }  
        if(min>(*(arr+arr_i)))
        {
           min=(*(arr+arr_i)); 
        }
         
        sum+=*(arr+arr_i);
        
   }
    
    
    printf("%ld %ld\n",sum-max,sum-min);
    
    return 0;
}
