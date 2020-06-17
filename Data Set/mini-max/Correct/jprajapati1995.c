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
    long int max = 0, min = 0, sum = 0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    sum = a + b + c + d;
    min = sum;
    if(max < sum)
            max = sum;
        
    sum = e + b + c + d;
    if( min > sum)
            min = sum;
    if(max < sum)
            max = sum;
    
    sum = a + e + c + d;
    if( min > sum)
            min = sum;
    if(max < sum)
            max = sum;
        
    sum = a + b + e + d;
    if( min > sum)
            min = sum;
    if(max < sum)
            max = sum;
        
    sum = a + b + c + e;
    if( min > sum)
            min = sum;
    if(max < sum)
            max = sum;
        
    printf("%ld %ld",min,max);
    return 0;
}
