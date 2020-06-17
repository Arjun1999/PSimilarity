#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int n[5];
    scanf("%lld %lld %lld %lld %lld",&n[0],&n[1],&n[2],&n[3],&n[4]);
    
    long long int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += n[i];
    }
    long long int min = LONG_MAX; long long int max = LONG_MIN;
    
    for (int i = 0; i < 5; i++) {
        if (n[i] > max) {
            max = n[i];
        }
        if (n[i] < min) {
            min = n[i];
        }
    }
    
    long long int max_sum = sum - min;
    long long int min_sum = sum - max;
    
    printf("%lld %lld", min_sum, max_sum);
    return 0;
}
