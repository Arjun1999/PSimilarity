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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int m[5];
    m[1]=b+c+d+e;
    m[2]=a+c+d+e;
    m[3]=a+b+d+e;
    m[4]=a+b+c+e;
    m[5]=a+b+c+d;
    long int x=m[1],y=m[1];
    for(i=0;i<5;i++)
        {
        if(m[i]>x)
            {x=m[i];}
        if(y>m[i])
            {y=m[i];}
    }
    printf("%lld %lld",x,y);
    return 0;
}
