#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int max = 0,min = 0,temp;
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    max = min = a + b + c + d ;
    temp = b + c + d + e;
    max = (temp>max)?temp:max;
    min = (temp<min)?temp:min;
    temp = c + d + e + a;
    max = (temp>max)?temp:max;
    min = (temp<min)?temp:min;
    temp = d + e + a + b;
    max = (temp>max)?temp:max;
    min = (temp<min)?temp:min;
    temp = e + a + b + c;
    max = (temp>max)?temp:max;
    min = (temp<min)?temp:min;
    printf("%lld %lld",min,max);
    
    return 0;
}
