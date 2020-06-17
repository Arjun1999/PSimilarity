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
    long int m[5],i,max,min;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    m[0]=b+c+d+e;
    m[1]=a+c+d+e;
    m[2]=a+b+d+e;
    m[3]=a+b+c+e;
    m[4]=a+b+c+d;
    max=m[0];
    for(i=1;i<5;i++){
        if(max<m[i]){
            max=m[i];
        }
    }
    min=m[0];
    for(i=1;i<5;i++){
        if(min>m[i]){
            min=m[i];
        }
    }
    printf("%ld %ld",min,max);
    return 0;
}
