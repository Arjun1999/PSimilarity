#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int x; 
    scanf("%lld", &x);
    long int min = x, max = x, sum = x;
    for (int i = 0; i < 4; ++i) {
        scanf("%lld", &x);
        sum += x;
        if (x < min) min = x;
        if (x > max) max = x;
    }
    printf("%lld %lld\n", sum - max, sum - min);
    return 0;
}
