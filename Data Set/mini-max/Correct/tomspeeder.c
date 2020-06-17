#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int max = 0;
    long int min = 1023;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int f = a + b + c + d;
    long int s = a + b + c + e;
    long int t = a + b + d + e;
    long int r = a + c + d + e;
    long int h = e + b + c + d;
    long int pole[5] = {f, s, t, r, h};
    long int maxi = 0;
    long int mini = f + e;
    for (unsigned int i = 0; i < 5; i ++){
        if (maxi < pole[i]){
            maxi = pole[i];
        }
        if (mini > pole[i]){
            mini = pole[i];
        }
    }
    printf("%ld %ld", mini, maxi);
    return 0;
}
