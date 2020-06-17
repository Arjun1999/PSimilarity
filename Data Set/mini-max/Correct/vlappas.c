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
    long long int total;
    long long int max;
    long long int min;
    
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    total = a+b+c+d+e;
    if(a>b && a>c && a>d && a>e){
        max = a;
    }
    else if(b>a && b>c && b>d && b>e){
        max = b;
    }
    else if(c>a && c>b && c>d && c>e){
        max = c;
    }
    else if(d>a && d>b && d>c && d>e){
        max = d;
    }
    else if(e>a && e>b && e>c && e>d){
        max = e;
    }
    else{
        max =a;
    }
    
    if(a<b && a<c && a<d && a<e){
        min = a;
    }
    else if(b<a && b<c && b<d && b<e){
        min = b;
    }
    else if(c<a && c<b && c<d && c<e){
        min = c;
    }
    else if(d<a && d<b && d<c && d<e){
        min = d;
    }
    else if(e<a && e<b && e<c && e<d){
        min = e;
    }
    else {
        min=a;
    }
    
    printf("%lld %lld",total-max, total-min);
    return 0;
}
