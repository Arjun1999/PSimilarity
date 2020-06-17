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
    long int min = 9223372036854775807;
    long int sum = 0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum = a+b+c+d;
    if(sum>max)
    {
        max = sum;
    }
    if(sum<min)
    {
        min = sum;
    }
    sum = a+b+c+e;
    if(sum>max)
    {
        max = sum;
    }
    else if(sum<min)
    {
        min = sum;
    }
    sum = a+b+d+e;
    if(sum>max)
    {
        max = sum;
    }
    else if(sum<min)
    {
        min = sum;
    }
    sum = a+c+d+e;
    if(sum>max)
    {
        max = sum;
    }
    else if(sum<min)
    {
        min = sum;
    }
    sum = b+c+d+e;
    if(sum>max)
    {
        max = sum;
    }
    else if(sum<min)
    {
        min = sum;
    }
    printf("%lld %lld", min, max);
    return 0;
}
