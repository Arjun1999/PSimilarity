#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    unsigned long int min = 0, max = 0; 
    for(int i = 0 ; i < 5 ; i++){
        scanf("%ld",&a[i]);
        min += a[i];
    }
    for(int i = 0 ; i < 5 ; i++){
        unsigned long int temp = 0;
        for(int j = 0 ; j < 5 ; j++ ){
            if(i != j ){
                 temp += a[j];
                
            }            
            
        }
       
        if(temp > max )
            max = temp;
        if(min > temp)
            min = temp;
        
        
    }
        
    printf("%lu %lu",min,max);
    
    return 0;
}
