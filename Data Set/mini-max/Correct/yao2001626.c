#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int max=0,min=1000000001;
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    int i;
    int sum;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    if(a>max){
        max=a;
    }
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    if(d>max){
        max=d;
    }
    if(e>max){
        max=e;
    }
    if(a<min){
        min=a;
    }
    if(b<min){
        min=b;
    }
    if(c<min){
        min=c;
    }
    if(d<min){
        min=d;
    }
    if(e<min){
        min=e;
    }
    
    printf("%lld %lld", a+b+c+d+e-max,a+b+c+d+e-min);
    
    return 0;
}
