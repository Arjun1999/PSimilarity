#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long arr[5];
    long long sum = 0;
    
    for (int i = 0;i < 5; i++) {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }
    
    long long min = LONG_MAX;
    long long max = 0;
    
    for (int i = 0;i < 5; i++) {
        
        sum -= arr[i];
        
        if (sum > max) {
            max = sum;
        }
        if (sum < min) {
            min = sum;
        }
        
        sum += arr[i];
    }
    
    printf("%lld %lld", min, max);
    return 0;
}
