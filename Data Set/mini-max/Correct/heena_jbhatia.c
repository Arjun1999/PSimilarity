#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    
    //scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    //for(int i=0;i<5;i++){
        scanf("%ld",&a[0]);
    //}
    
    b=c=d=a[0];
    
    for(int i=1;i<5;i++){
        scanf("%ld",&a[i]);
        if(b<a[i])
            b=a[i];
        else if(c>a[i]){
            c=a[i];
        }
        d+=a[i];
    }
    printf("%ld %ld",d-b, d-c);
    
    return 0;
}
