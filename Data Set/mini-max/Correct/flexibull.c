#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    //Sorting would be inefficient. So is holding an array of inputs.
    long sum = 0;
    long min = 0x7FFFFFFF;
    long max = 0x00000000;
    long a = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&a);
       sum += a;
       if (a < min) {
           min = a;
       }
       if (a > max) {
           max = a;
       }
    }
    printf("%lu %lu", (long)(sum - max), (long)(sum - min));
    return 0;
}
