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
    
    long int sum;
    sum = a + b + c + d + e; // the sum of all the numbers
    
    // Find the largest of the numbers by comparison O(n) operations (faster than sorting)
    long int large;
    large = a;
    if(b>large){large=b;}
    if(c>large){large=c;}
    if(d>large){large=d;}
    if(e>large){large=e;}
    
    long int min_sum = sum - large; // the min sum is the sum without the largest value
        
    // Do the same for the smallest numer
    long int small;
    small = a;
    if(b<small){small=b;}
    if(c<small){small=c;}
    if(d<small){small=d;}
    if(e<small){small=e;}
    
    long int max_sum = sum - small; // the max sum is the sum without the smallest value
    
    // output
    printf("%ld %ld",min_sum, max_sum);
    
    
    
    return 0;
}
