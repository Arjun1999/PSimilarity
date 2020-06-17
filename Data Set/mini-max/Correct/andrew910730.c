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
    long int min, max, sum;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    min = a;
    max = a;
    sum = a + b + c + d + e;
    if (b > max) max = b;
    else if (b < min) min = b;
    if (c > max) max = c;
    else if (c < min) min = c;
    if (d > max) max = d;
    else if (d < min) min = d;
    if (e > max) max = e;
    else if (e < min) min = e;
    
     printf("%ld %ld", sum - max, sum - min);
        
    return 0;
}
