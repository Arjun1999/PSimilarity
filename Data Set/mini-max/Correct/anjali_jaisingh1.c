#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long min=0,max=0;
    long smin=0,smax=0;

    long a[5];
    for(int i = 0; i < 5; i++){
       scanf("%ld",&a[i]);
        smin += a[i];
        smax += a[i];
    }
    min = a[1];
        for(int i = 0; i < 5; i++){
            if(min > a[i])
            {
                min = a[i];
            }
            if(max < a[i])
            {
                max = a[i];
            }
            
        }
    smin = smin - max;
    smax = smax - min;
    
    printf("%ld %ld", smin,smax);
    
    
    return 0;
}
