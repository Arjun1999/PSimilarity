#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    long int arr[5] = {a,b,c,d,e};
    
    long int min = arr[0];
    long int max = arr[0];
    long int min_sum = 0;
    long int max_sum = 0;
    long int sum = 0;
    
    for (int i=0; i<5; i++){
        sum += arr[i];
        if (arr[i] < min){
            min = arr[i];}
              
        if(arr[i] > max){
            max = arr[i];}
    }
    min_sum = sum - max;
    max_sum = sum - min;
    
    printf("%ld %ld", min_sum, max_sum);
        
    
    
    
    return 0;
}
