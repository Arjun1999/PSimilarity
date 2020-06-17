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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    long int sum = a + b + c + d + e;
    long int min = (sum - a);
    long int max = (sum - a);
    
    max = (sum - a);
    min = (sum - a);
    if ((sum - b) > max)
        max = (sum - b);
    if ((sum - c) > max)
        max = (sum - c);
    if ((sum - d) > max)
        max = (sum - d);
    if ((sum - e) > max)
        max = (sum - e);
    
    if ((sum - b) < min)
        min = (sum - b);
    if ((sum - c) < min)
        min = (sum - c);
    if ((sum - d) < min)
        min = (sum - d);
    if ((sum - e) < min)
        min = (sum - e);    
    
    printf("%ld %ld\n", min, max);
    return 0;
}
