#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long int a[5];
    unsigned long long int min_a = ULLONG_MAX;
    unsigned long long int max_a = 0;
    unsigned long long int accum = 0;
    unsigned long long int low_sum = 0;
    unsigned long long int hi_sum = 0;
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    
    // Loop over all the numbers; sum and find min and max
    for (int i=0; i<5; i++)
    {
        if (a[i] < min_a) 
        {
            min_a = a[i];
        } // Find the min
        if (a[i] > max_a) 
        {
            max_a = a[i];
        } // Find the max
        accum += a[i];
    }
    low_sum = accum-max_a;
    hi_sum = accum-min_a;
    printf("%lld %lld", low_sum, hi_sum);
    return 0;
}
