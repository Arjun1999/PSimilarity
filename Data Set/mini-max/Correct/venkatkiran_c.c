#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int fpmax (long int x , long int y){
    if (x>y)
        return x;
    else
    return y;
    
}
long int fpmin (long int x , long int y){
    if (x>y)
        return y;
    else
    return x;
    
}
int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int sum;
    long int min;
    long int max;
    int i=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    min= fpmin(a,fpmin(b,(fpmin(c,fpmin(d,e)))));
    max= fpmax(a,fpmax(b,(fpmax(c,fpmax(d,e)))));
    printf("%ld %ld", sum-max, sum-min);
    
    return 0;
}
