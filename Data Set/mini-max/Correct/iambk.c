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
    scanf("%li %li %li %li %li",&a,&b,&c,&d,&e);
    long int suma=0,sumb=0,sumc=0,sumd=0,sume=0,max,min;
    suma=b+c+d+e;
    sumb=a+c+d+e;
    sumc=a+b+d+e;
    sumd=a+b+c+e;
    sume=a+b+c+d;
    max=suma;
    if(sumb>max)
        max=sumb;
    if(sumc>max)
        max=sumc;
    if(sumd>max)
        max=sumd;
    if(sume>max)
        max=sume;
    min=sume;
    if(sumb<min)
        min=sumb;
    if(sumc<min)
        min=sumc;
    if(sumd<min)
        min=sumd;
    if(suma<min)
        min=suma;
    
    printf("%li %li",min,max);
    
        return 0;
}
