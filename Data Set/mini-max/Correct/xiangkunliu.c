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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    long int sums[5];
    
    sums[0] = b + c + d + e;
    sums[1] = a + c + d + e;
    sums[2] = a + b + d + e;
    sums[3] = a + b + c + e;
    sums[4] = a + b + c + d;
    
    long int min = LONG_MAX;
    long int max = 0;
    
    for (int i = 0; i < 5; i++){
        if (sums[i] > max) {
            max = sums[i];
        }
        if (sums[i] < min) {
            min = sums[i];
        }
    }
    
    printf("%ld %ld", min, max);
    
    return 0;
}
