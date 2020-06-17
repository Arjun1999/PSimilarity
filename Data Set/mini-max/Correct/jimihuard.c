#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long a[5];
    scanf("%lld %lld %lld %lld %lld",a,a+1,a+2,a+3,a+4);
    
    long long total = 0;
    for (int i = 0; i < 5; ++i) {
        total += a[i];
    }
    int max = a[0];
    int min = a[0];
    
    for (int i = 0; i < 5; ++i) {
       if (a[i] > max)
           max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    
    printf("%lld %lld\n", total - max, total - min);
    
    return 0;
}
