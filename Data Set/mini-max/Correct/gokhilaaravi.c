#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long int a[5], min = 10000000000000, max = 0, i, j, sum;
    for(i = 0; i < 5; i++)
        scanf("%lld", &a[i]);
    for(i = 0; i < 5; i ++) {
        sum = 0;
        for(j = 0; j < 5; j++) {
            if(i != j) {
                sum += a[j];
            }
        }
        //printf("%lld\n", sum);
        if(sum > max) {
            max = sum;
        }
        if(sum < min){
            min = sum;
        }
    }
    printf("%lld %lld", min, max);
    return 0;
}
