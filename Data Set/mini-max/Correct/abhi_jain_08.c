#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j;
    long int abc[5],t;
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    abc[0]=b+c+d+e;
    abc[1]=a+c+d+e;
    abc[2]=a+b+d+e;
    abc[3]=a+b+c+e;
    abc[4]=a+b+c+d;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(abc[j]>abc[j+1]){
                t=abc[j];
                abc[j]=abc[j+1];
                abc[j+1]=t;
            }
        }
    }
    printf("%lld %lld",abc[0],abc[4]);
    return 0;
}
