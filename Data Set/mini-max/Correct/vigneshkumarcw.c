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
    long int max=0, min, sum; 
    scanf("%li %li %li %li %li",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    min = a;
    if(a>max)
        {
        max = a;       
    }
    if(a<min)
        {
        min = a;
    }
    if(b>max)
        {
        max = b;
    }
    if(b<min)
        {
        min = b;
    }
    if(c>max)
        {
        max = c;
    }
    if(c<min)
        {
        min = c;
    }
    if(d>max)
        {
        max = d;
    }
    if(d<min)
        {
        min = d;
    }
    if(e>max)
        {
        max = e;
    }
    if(e<min)
        {
        min = e;
    }  
    printf("%li %li", sum-max, sum-min);        
    return 0;
}
