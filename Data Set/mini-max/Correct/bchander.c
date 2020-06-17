#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int min, max, sum[5];
    //int k=1;
    for(int i = 1; i<= 5; i++){
       scanf("%d",&arr[i]);
    }
    for(int i=1; i<=5; i++){
        sum[i] = 0;
        for(int j=1; j<=5; j++){
           if(j!=i){
            sum[i] += arr[j];
           }
           
        }
        //printf("%ld  ",sum);    
    }
    min =  sum[1]; max = sum[1];
    for(int i=2; i<=5; i++){
        if(min > sum[i]){
            min = sum[i];
        }
        if(max < sum[i]){
            max = sum[i];
        }
    }
    printf("%ld %ld", min, max);    
        
               
    
    return 0;
}
