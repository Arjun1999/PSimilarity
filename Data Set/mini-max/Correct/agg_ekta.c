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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int min;
    long long int max;
    if(a+b+c+d<b+c+d+e){
        min=a+b+c+d;
        max=b+c+d+e;
    }
    else{
        max=a+b+c+d;
        min=b+c+d+e;
    }
        
    if(max<c+d+e+a)
        max=c+d+e+a;
    else if(c+d+e+a<min)
        min=c+d+e+a;
    if(max<d+e+a+b)
        max=d+e+a+b;
    else if(d+e+a+b<min)
        min=d+e+a+b;
    if(max<e+a+b+c)
        max=e+a+b+c;
    else if(e+a+b+c<min)
        min=e+a+b+c;
    
    printf("%lld %lld",min,max);
    return 0;
}
