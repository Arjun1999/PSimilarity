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
    long int minSum = 0;
    long int maxSum = 0;
    long int arr[5] = {a, b, c ,d ,e};
    
    for(int i = 0; i < 5; i++){
        long int tempSum = 0;
        for(int j = 0; j < 5; j++){
            if(!(i == j)){
                tempSum += arr[j];
            }
        }
        if(minSum == 0){
            minSum = tempSum;
        }
        
        if(!(tempSum >= minSum)){
            minSum = tempSum;
        }
        if(!(tempSum <= maxSum)){
            maxSum = tempSum;
        }
    }
    printf("%ld %ld", minSum, maxSum);
    return 0;
}
