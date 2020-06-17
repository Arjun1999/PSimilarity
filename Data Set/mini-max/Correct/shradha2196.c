#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5], s = 0, max, min; 
    int i;
    scanf("%lld%lld%lld%lld%lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    s = a[0]+a[1]+a[2]+a[3]+a[4];
    
    max = min = s - a[0];
    
    for(i = 1; i < 5; i++) {
        if(s-a[i] > max)
            max = s - a[i];
        if(s - a[i] < min)
            min = s - a[i];
    }
    
    printf("%lld %lld", min,max);
    
    return 0;
}
