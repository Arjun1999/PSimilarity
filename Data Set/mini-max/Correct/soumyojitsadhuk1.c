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
    int x=5;
    long int temp;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int r[5];
    r[0]=a+b+c+d;
    r[1]=b+c+d+e;
    r[2]=c+d+e+a;
    r[3]=d+e+a+b;
    r[4]=e+a+b+c;
    for(int i=0;i<4;i++){
        for(int j=0;j<5-i-1;j++)
        if(r[j]>r[j+1]){
            temp=r[j];
            r[j]=r[j+1];
            r[j+1]=temp;
           
        }
           
    }
    printf("%ld %ld",r[0],r[4]);
    return 0;
}
