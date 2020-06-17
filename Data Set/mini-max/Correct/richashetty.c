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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int p[5];
    p[0]=a+b+c+d;
    p[1]=b+c+d+e;
    p[2]=c+d+e+a;
    p[3]=d+e+a+b;
    p[4]=e+a+b+c;
    long long int min=p[0];
    long long int max=p[0];
    int i;
    for(i=1;i<5;i++)
        {
        if(min>p[i])
            {
            min=p[i];
        }
        if(max<p[i])
            {
            max=p[i];
        }
        
    }
    printf("%lld %lld",min,max);
    return 0;
}
