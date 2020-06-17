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
    long long int e;
    long long int i,j,x[5],max,min;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    x[0]=b+c+d+e;
    x[1]=a+c+d+e;
    x[2]=a+b+d+e;
    x[3]=a+b+c+e;
    x[4]=a+b+c+d;
    min=x[0];
    max=x[0];
    for(i=0;i<5;i++){
        if(x[i]<min)
        {min=x[i];}
    if(x[i]>max)
        {max=x[i];}
    }
    printf("%lld %lld",min,max);
    return 0;
}
