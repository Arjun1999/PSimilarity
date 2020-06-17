#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    long long int upperNumber = 1;
    long long int lowerNumber = pow(10, 9);
    
    long long int sum = 0;
    
    for(int i = 0; i < 5; i++)
    {
        sum += arr[i];
        
        if(arr[i] <= lowerNumber)
            lowerNumber = arr[i];
        if(arr[i] >= upperNumber)
            upperNumber = arr[i];
    }
    
    long long int ol = sum - upperNumber;
    long long int oh = sum - lowerNumber;
    
    printf("%lld %lld", ol, oh);
    
    return 0;
}
