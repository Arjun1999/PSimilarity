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
    long int t1;
    long int t2;
    long int t3;
    long int max=0;
    long int min=10000000000;    
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
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
    t1=a+b+c+d+e;
    t2=t1-max;
    t3=t1-min;
    printf("%ld %ld",t2,t3);
    return 0;
}
