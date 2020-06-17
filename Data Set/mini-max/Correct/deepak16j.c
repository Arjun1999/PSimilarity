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
    long small;
    long small1=(a<=b)?(a<=c)?a:c:(b<=c)?b:c;
    long small2=(d<=e)?d:e;
    if(small1<=small2){
        small=small1;
    }else{
        small=small2;
    }
    long maxsum=a+b+c+d+e-small;
    
     small1=(a>=b)?(a>=c)?a:c:(b>=c)?b:c;
    small2=(d>=e)?d:e;
    if(small1>=small2){
        small=small1;
    }else{
        small=small2;
    }
    long minsum=a+b+c+d+e-small;
    printf("%ld %ld",minsum,maxsum);
        return 0;
}
