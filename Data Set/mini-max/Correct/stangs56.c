#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5]; 

    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    
    long long int min = LONG_MAX, max = 0;
    
    for(int i = 0; i < 5; i++){
        long long int sum = 0;
        for(int ii = 0; ii < 5; ii++){
            if(ii == i)
                continue;
            sum += a[ii];
        }
        min = sum<min ? sum : min;
        max = sum>max ? sum : max;
    }
    
    printf("%lld %lld", min, max);
    
    return 0;
}
