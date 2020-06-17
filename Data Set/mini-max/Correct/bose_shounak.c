#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long arr[5];
    scanf("%lld %lld %lld %lld %lld",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    
    long long max = -1, min = -1, sum;
    
    for (int i = 0; i < 5; i++) {
        sum = 0;
        for (int j = 0; j < 5; j++) {
            if (j == i)
                continue;
            sum += arr[j];
        }
        
        if (max == -1 || sum > max)
            max = sum;
        if (min == -1 || sum < min)
            min = sum;
    }
    
    printf("%lld %lld", min, max);
    return 0;
}
