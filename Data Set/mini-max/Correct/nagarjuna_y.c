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
    long int l,s,min,i,max;
    long int h[5];
    h[0]=a;
    h[1]=b;
    h[2]=c;
    h[3]=d;
    h[4]=e;
    s=h[0];
    l=h[i];
    for(i=1;i<5;i++){
        if(h[i]<s)
            s=h[i];
        if(h[i]>l)
            l=h[i];
    }
    min=(a+b+c+d+e)-l;
        max=(a+b+c+d+e)-s;
    printf("%ld %ld",min,max);
    return 0;
}
