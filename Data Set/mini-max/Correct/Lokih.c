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
    
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int totalAll = a+b+c+d+e;
    
    long int max=0;
    long int min=0;
    
    a = totalAll - a;
    b = totalAll - b;
    c = totalAll - c;
    d = totalAll - d;
    e = totalAll - e;
    
    max = a;
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
    
     min = a;
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
    
    printf("%ld %ld",min,max);
    return 0;
}
