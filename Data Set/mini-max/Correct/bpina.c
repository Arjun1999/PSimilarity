#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long int getSum(long long int *values, int position);

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    long long int values[] = {a, b, c, d, e};
    long long int min;
    long long int max;
    
    int i;
    for(i = 0; i < 5; i++){
        long long int sum = getSum(values, i);
              
        char *format;
        if (i == 0) {
            min = sum;
            max = sum;
        } else {
            if(sum < min) {
               min = sum; 
            }
            if(sum > max) {
                max = sum;
            }
        }
    }
    
    printf("%lli %lli", min, max);
    
    return 0;
}

long long int getSum(long long int *values, int position) {
    switch(position) {
        case 0:
        return values[1] + values[2] + values[3] + values[4];
        case 1:
        return values[0] + values[2] + values[3] + values[4];
        case 2:
        return values[0] + values[1] + values[3] + values[4];
        case 3:
        return values[0] + values[1] + values[2] + values[4];
        case 4:
        return values[0] + values[1] + values[2] + values[3];
        default:
        return -1;
    }
}
