#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a,f,g,h,i,j,k,l; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    f=a+b+c+d;
    g=a+b+c+e;
    h=a+b+d+e;
    i=a+c+d+e;
    j=b+c+d+e;
    if(a==b && b==c && c==d && d==e){
        k=a+b+c+d;
        
        printf("%lld" " ",k);
        printf("%lld",k);
    }
    if(f<g && f<h && f<i && f<j){
        printf("%lld" " ",f);
        }
    else if(g<f && g<h && g<i && g<j){
        printf("%lld" " ",g);
    }
    else if(h<f && h<g && h<i && h<j){
        printf("%lld" " ",h);
}
    else if(i<f && i<g && i<h && i<j){
        printf("%lld" " ",i);
    }
    else if(j<f && j<g && j<h && j<i){
        printf("%lld" " ",j);
    }
    if(f>g && f>h && f>i && f>j){
        printf("%lld" " ",f);
        }
    else if(g>f && g>h && g>i && g>j){
        printf("%lld" " ",g);
    }
    else if(h>f && h>g && h>i && h>j){
        printf("%lld" " ",h);
}
    else if(i>f && i>g && i>h && i>j){
        printf("%lld" " ",i);
    }
    else if(j>f && j>g && j>h && j>i){
        printf("%lld" " ",j);
    }
    
    return 0;
}
