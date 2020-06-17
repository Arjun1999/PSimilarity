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
    
    long long int maximum = 0;
    long long int minimum = 9223372036854775807;
    long long int temp = 0;
    for (int i = 0; i < 5; i++){
        temp = 0;
        for(int j = 0; j < 5; j++){
            if(i != j){temp += arr[j];}
        }
        if(temp > maximum) {maximum = temp;}
        if(temp < minimum) {minimum = temp;}
    }
   printf("%lld %lld", minimum, maximum);
    
    return 0;
}
