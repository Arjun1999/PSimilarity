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
    long int x=a+b+c+d;
    long int y=a+b+c+e;
    long int z=a+b+e+d;
    long int w=a+e+c+d;
    long int v=e+b+c+d;
    if((x<=y) && (x<=z) && (x<=w) && (x<=v) )
        printf("%ld %s",x, "");
    else if((y<=x) && (y<=z) && (y<=w) && (y<=v) )
        printf("%ld %s",y, "");
    else if((z<=x) && (z<=y) && (z<=w) && (z<=v) )
        printf("%ld %s",z, "");
    else if((w<=x) && (w<=z) && (w<=y) && (w<=v) )
        printf("%ld %s",w, "");
    else if((v<=x) && (v<=z) && (v<=y) && (v<=w) )
        printf("%ld %s",v, "");
    
    if((x>=y) && (x>=z) && (x>=w) && (x>=v) )
        printf("%ld %s",x, "");
    else if((y>=x) && (y>=z) && (y>=w) && (y>=v) )
        printf("%ld %s",y, "");
    else if((z>=x) && (z>=y) && (z>=w) && (z>=v) )
        printf("%ld %s",z, "");
    else if((w>=x) && (w>=z) && (w>=y) && (w>=v) )
        printf("%ld %s",w, "");
    else if((v>=x) && (v>=z) && (v>=y) && (v>=w) )
        printf("%ld %s",v, "");
        
    return 0;
}
