#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long int t[5];
    int i;
   long int max;
   long int min = 0;
   long int sum = 0;
   long int maxsum;
   long int minsum;
    
    scanf("%ld %ld %ld %ld %ld",&t[1],&t[2],&t[3],&t[4],&t[5]);
    max = t[1];
    min = t[1];
    i = 1;
    while (i < 5) {
        ++i;
        if (t[i] > max) {max = t[i];}
        if (min > t[i]) {min = t[i];}
    };
    sum = t[1] + t[2] + t[3] + t[4] + t[5];
    printf("%ld %ld", sum-max, sum-min);
    return 0;
}