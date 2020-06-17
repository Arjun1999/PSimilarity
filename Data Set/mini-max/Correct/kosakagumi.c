#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define N 5 

int main(){
    int i;
    unsigned long long int val,min,max,tmp;
    scanf("%lld",&val);
    max = val;
    min = val;
    tmp = val;
    for( i = 1 ; i < 5 ; i++ ) {
        scanf("%lld",&val);
        if( val > max ) {
            max = val;
        }
        if( val < min ) {
            min = val;
        }
        tmp += val;
    }
    printf("%lld %lld",tmp - max,tmp - min);
    return 0;
}
