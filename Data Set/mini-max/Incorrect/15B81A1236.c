#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int *summ=malloc(sizeof(int)*5);
    int sum=0,min,max;
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        
    }
    
        for(int i=0;i<5;i++){
            
            
                sum=sum+arr[i];
                
        }
        for(int i=0;i<5;i++){
            summ[i]=sum-arr[i];
         
        }
        min=summ[0];
       max=summ[0];
        for(int i=0;i<5;i++){
            if(min>summ[i])
                min=summ[i];
            if(max<summ[i])
                max=summ[i];
        }   
    printf("%d \t %d",min,max);
    return 0;
}
