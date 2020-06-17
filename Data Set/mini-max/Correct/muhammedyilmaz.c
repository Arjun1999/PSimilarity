#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    long long int sum, sumA, sumB, sumC, sumD, sumE;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum = a + b + c + d + e;
    sumA = b + c + d + e;
    sumB = a + c + d + e;
    sumC = a + b + d + e;
    sumD = a + b + c + e;
    sumE = a + b + c + d;
    
    if(a>=b&&a>=c&&a>=d&&a>=e)         printf("%lld",sum-a);
    else if(b>=a&&b>=c&&b>=d&&b>=e)    printf("%lld",sum-b);
    else if(c>=a&&c>=b&&c>=d&&c>=e)    printf("%lld",sum-c);
    else if(d>=a&&d>=b&&d>=c&&d>=e)    printf("%lld",sum-d);
    else if(e>=a&&e>=b&&e>=c&&e>=d)    printf("%lld",sum-e);
        
    printf(" ");    
        
    if(a<=b&&a<=c&&a<=d&&a<=e)         printf("%lld",sum-a);
    else if(b<=a&&b<=c&&b<=d&&b<=e)    printf("%lld",sum-b);
    else if(c<=a&&c<=b&&c<=d&&c<=e)    printf("%lld",sum-c);
    else if(d<=a&&d<=b&&d<=c&&d<=e)    printf("%lld",sum-d);
    else if(e<=a&&e<=b&&e<=c&&e<=d)    printf("%lld",sum-e);
    
    
    return 0;
}
