#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int min(int a,int b);
int max(int a,int b);

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    long long int sum=0;
    long long int minimum,maximum;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    sum=a+b+c+d+e;
    
    minimum=min(a,min(b,min(c,min(d,e))));
    maximum=max(a,max(b,max(c,max(d,e))));
    
    printf("%lld %lld\n",(sum-maximum),(sum-minimum));
    
    
    
    return 0;
}

int min(int a,int b){
    if(a<b)
        return a;
    else 
        return b;
}    

int max(int a,int b){
    if(a>b)
        return a;
    else 
        return b;
}
    