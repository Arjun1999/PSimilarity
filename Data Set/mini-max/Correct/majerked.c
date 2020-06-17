#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    scanf("%ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    
    long int min = INT_MAX;
    long int max = INT_MIN;
    long int total = 0;
    
    for (int i = 0;i < 5;i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
        total += a[i];
    }
    
    printf("%ld ", total - max);
    printf("%ld\n", total - min);
    
    return 0;
}
