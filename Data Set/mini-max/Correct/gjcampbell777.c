#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long temp = 0;
    long long smallest = 0;
    long long largest = 0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    for(int i = 0; i < 5; i++){
        
        for(int j = 0; j < 5; j++){
            
            temp += arr[j];
            
        }
        
        temp -= arr[i];
        
        if(temp < smallest || smallest == 0){
            
            smallest = temp;
            
        }
        
        if(temp > largest || largest == 0){
            
            largest = temp;
            
        }
        
        temp = 0;
        
    }
    
    printf("%llu %llu", smallest, largest);
    
    return 0;
}
