#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    
    long long min = 1000000000;
    long long max = 0; 
    
    long long t; 
    long long sum = 0.0; 
    for (int i = 0; i < 5; i++) {
        scanf("%lld", &t); 
        if (min > t) min = t; 
        if (max < t) max = t; 
        sum += t; 
    }
    
    printf("%lld %lld", (sum - max), (sum - min));
    
    return 0;
}
