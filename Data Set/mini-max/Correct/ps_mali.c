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
    long int max, min;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    max = (a > b ? a : b) > (c > d ? c : d) ? ((a > b) ? a : b) : ((c > d) ? c : d);
    max = (max >  e) ? max : e;
    printf("%ld", ((a + b + c + d + e) - max));
    min = ((a < b ? a : b) < (c < d ? c : d)) ? ((a < b) ? a : b) : ((c < d) ? c : d);
   
    min = (min <  e) ? min : e;
    printf(" %ld", (a + b + c + d + e) - min);
    return 0;
}
