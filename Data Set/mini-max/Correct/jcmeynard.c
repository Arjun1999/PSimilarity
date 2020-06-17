#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    long int min = LONG_MAX; 
    long int max = 0; 
    long int sum = 0;
    
    scanf("%ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    
    for (int i = 0; i < 5; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
        sum += a[i];
    }
    printf("%ld %ld\n", sum - max, sum - min);
    return 0;
}
