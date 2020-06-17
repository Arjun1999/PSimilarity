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
    long long int e,f[5];
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    f[0]=a+b+c+d;
    f[1]=b+c+d+e;
    f[2]=c+d+e+a;
    f[3]=d+e+a+b;
    f[4]=e+a+b+c;
    long long int s=f[0],l=f[0];
    for(int i=0;i<5;i++)
        {
        if(s>f[i])
            s=f[i];
        if(l<f[i])
            l=f[i];
    }
    printf("%lld %lld",s,l);
    return 0;
}
