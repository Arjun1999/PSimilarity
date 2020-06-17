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
    
    long int minsum = 0, maxsum = 0;
    
    if((a>=b) && (a>=c) && (a>=d) && (a>=e))
        minsum = b + c + d + e;
    
    if((b>=a) && (b>=c) && (b>=d) && (b>=e))
        minsum = a + c + d + e;
    
    if((c>=a) && (c>=b) && (c>=d) && (c>=e))
        minsum = a + b + d + e;
    
    if((d>=a) && (d>=b) && (d>=c) && (d>=e))
        minsum = a + b + c + e;
    
    if((e>=a) && (e>=b) && (e>=c) && (e>=d))
        minsum = a + b + c + d;
    
    if((a<=b) && (a<=c) && (a<=d) && (a<=e))
        maxsum = b + c + d + e;
    
    if((b<=a) && (b<=c) && (b<=d) && (b<=e))
        maxsum = a + c + d + e;
    
    if((c<=a) && (c<=b) && (c<=d) && (c<=e))
        maxsum = a + b + d + e;
    
    if((d<=a) && (d<=b) && (d<=c) && (d<=e))
        maxsum = a + b + c + e;
    
    if((e<=a) && (e<=b) && (e<=c) && (e<=d))
        maxsum = a + b + c + d;
    
    printf("%ld %ld", minsum, maxsum);
    
    return 0;
}
