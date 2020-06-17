#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int max = LONG_MIN, min = LONG_MAX, total = 0;
    for(int i = 0; i < 5; i++){
        long int a;
        scanf("%ld",&a);
        total+=a;
        if(a < min) min = a;
        if(a > max) max = a;
    }
    printf("%ld %ld",total-max,total-min);
    return 0;
}
