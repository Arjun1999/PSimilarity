#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long int getLarge(long int a,long int b){
    if(a >= b)
        return a;
    else
        return b;
}
long int getSmall(long int a,long int b){
    if(a <= b)
        return a;
    else
        return b;
}
long int sum(long int a,long int b,long int c,long int d, long int e){
    return (a+b+c+d+e);
}

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int ls= sum(a,b,c,d,e) - getSmall(getSmall(getSmall(getSmall(a,b),c),d),e);
    long int ss= sum(a,b,c,d,e) - getLarge(getLarge(getLarge(getLarge(a,b),c),d),e);
    printf("%ld %ld",ss, ls);    
    return 0;
}
