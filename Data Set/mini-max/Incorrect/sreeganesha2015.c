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
    long int e,sum1,sum2,sum3,sum4,sum5;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum1=a+b+c+d;
    sum2=a+b+c+e;
    sum3=b+c+d+e;
    sum4=a+c+d+e;
    sum5=a+b+d+e;
    
    
    return 0;
}
