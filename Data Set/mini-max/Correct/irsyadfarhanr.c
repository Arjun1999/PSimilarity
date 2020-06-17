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
    long long int max ,min ,curr;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    curr = a+b+c+d;
    max = curr;
    min = curr;
    curr = a+b+c+e;
    if(curr>max){
        max = curr;
    }
    else if(curr<min){
        min = curr;
    }
    curr = a+b+d+e;
    if(curr>max){
        max = curr;
    }
    else if(curr<min){
        min = curr;
    }
    curr = a+c+d+e;
    if(curr>max){
        max = curr;
    }
    else if(curr<min){
        min = curr;
    }
    curr = b+c+d+e;
    if(curr>max){
        max = curr;
    }
    else if(curr<min){
        min = curr;
    }
    printf("%lld %lld",min ,max);
    return 0;
}
