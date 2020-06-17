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
    long int min,max,sum;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    min=a;
    max=a;
    if(min>b){
        min=b;
    }
    if(min>c){
        min=c;
    }
    if(min>d){
        min=d;
    }
    if(min>e){
        min=e;
    }
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    if(max<d){
        max=d;
    }
    if(max<e){
        max=e;
    }
    sum=a+b+c+d+e;
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
