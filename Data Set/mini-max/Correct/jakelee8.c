#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long min_val = 0; 
    long long max_val = 0; 
    long long sum = 0; 
    for (int i = 0; i < 5; ++i) {
        long long val = 0;
        scanf("%lld", &val);
        if (i == 0 || val < min_val) min_val = val;
        if (i == 0 || val > max_val) max_val = val;
        sum += val;
    }
    printf("%lld %lld\n", sum - max_val, sum - min_val);
    return 0;
}
