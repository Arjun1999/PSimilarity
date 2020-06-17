#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int max,min;
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    if(a>b&a>c&a>d&a>e){
        max=a;
    }else if(b>a&b>c&b>d&b>e){
        max=b;
    }else if(c>a&c>b&c>d&c>e){
        max=c;
    }else if(d>a&d>b&d>c&d>e){
        max=d;
    }else{
        max=e;
    }
    if(a<b&a<c&a<d&a<e){
        min=a;
    }else if(b<a&b<c&b<d&b<e){
        min=b;
    }else if(c<a&c<b&c<d&c<e){
        min=c;
    }else if(d<a&d<b&d<c&d<e){
        min=d;
    }else{
        min=e;
    }
    printf("%lld\t",(a+b+c+d+e)-max);
    printf("%lld",(a+b+c+d+e)-min);
    
    return 0;
}
