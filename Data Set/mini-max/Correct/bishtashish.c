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
    long int smallest,largest;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    smallest=a;
    largest=a;
    if(b<smallest){
        smallest=b;
    }if(c<smallest){
        smallest=c;
    }if(d<smallest){
        smallest=d;
    }if(e<smallest){
        smallest=e;
    }
    if(b>largest){
        largest=b;
    }if(c>largest){
        largest=c;
    }if(d>largest){
        largest=d;
    }if(e>largest){
        largest=e;
    }
    long int total=a+b+c+d+e;
    printf("%ld %ld",total-largest,total-smallest);
    return 0;
}
