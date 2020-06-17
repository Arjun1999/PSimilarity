#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    
    long long int input[5]; 
    
    scanf("%lld %lld %lld %lld %lld", &input[0], &input[1], &input[2], &input[3], &input[4]);
    
    int max = 0;
    int min = 0;
    long long int max_value = 0;
    long long int min_value = 10e9;
    
    for(int i = 0; i < 5; i++){
        if(input[i] > max_value){
            max_value = input[i];
            max = i;
        }
        if(input[i] < min_value){
            min_value = input[i];
            min = i;
        }
    }
    
    max_value = 0;
    min_value = 0;
    
    for(int i = 0; i < 5; i++){
        if(i != max) min_value += input[i];
        if(i != min) max_value += input[i];
    }
    
    printf("%lld %lld", min_value, max_value);
   
    return 0;
}
