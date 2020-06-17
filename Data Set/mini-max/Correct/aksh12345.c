#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long arr[5],max_sum=0,min_sum=0,large,small;
    int index_min=0,index_max=0,i=0;
    
    for(i=0;i<5;i++){
        scanf("%ld ",&arr[i]);
    }
    large = arr[0];
    small = arr[0];
    
    for(int i=0;i<5;i++){
        if(arr[i]>large){
            large = arr[i];
            index_max = i;
        }
        if(arr[i]<small){
            small = arr[i];
            index_min = i;
        }
    } 
    
    for(i=0;i<5;i++){
        
    }
    
    for(i=0;i<5;i++){
        if(i!=index_max){
            min_sum += arr[i];
        }
        if(i!=index_min){
            max_sum += arr[i];
        }
    }
    
    printf("%ld %ld ",min_sum,max_sum);
    return 0;
}
