#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e,i,min,max;
   long long int f[1000];
 
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    f[1]=b+c+d+e;
    f[2]=a+c+d+e;
    f[3]=a+b+d+e;
    f[4]=a+b+c+e;
    f[5]=a+b+c+d;
    min=f[1];
    max=f[1];
    
    for(i=2;i<=5;i++){
        if(f[i]>max){
            max=f[i];}
        if(f[i]<min){
        min=f[i];}
    }
    printf("%lld %lld",min,max);
    return 0;
}
