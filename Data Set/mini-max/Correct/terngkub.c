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
    long int sum = a[0], min = a[0], max = a[0];
    for(int i = 1; i < 5; i++){
        sum += a[i];
        if(a[i] < min) { min = a[i]; }
        if(a[i] > max) { max = a[i]; }
    }
    printf("%ld %ld", sum-max, sum-min);
    
    return 0;
}
