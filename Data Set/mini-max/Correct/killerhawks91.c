#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int arr[5];
    for (int i = 0; i < 5; i++){
        scanf("%lld", &arr[i]);   
    }
    
    // Find the place in the array with the minimum value
    long long int minPlace = 0, maxSum = 0, maxPlace = 0, minSum = 0;
    long long int minSoFar = arr[0], maxSoFar = arr[0];
    for (int i = 0; i < 5; i++){
        if (arr[i] < minSoFar){
            minSoFar = arr[i];
            minPlace = i;
        }
        
        if (arr[i] > maxSoFar){
            maxSoFar = arr[i];
            maxPlace = i;
        }
    }
    
    for (int i = 0; i < 5; i++){
        if (i != minPlace)
            maxSum += arr[i];
        if (i != maxPlace)
            minSum += arr[i];
    }
    
    printf("%lld %lld", minSum, maxSum);
    
    return 0;
}
