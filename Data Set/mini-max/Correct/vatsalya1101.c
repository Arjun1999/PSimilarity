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
    int i,j;
    scanf("%lld %lld %lld %lld %lld", &a,&b,&c,&d,&e);
     unsigned long long int p[5],max,min,sum=0;
    p[0]=a; p[1]=b; p[2]=c; p[3]=d; p[4]=e;
    scanf("%lld",&p[0]);
    max=p[0];min=p[0];sum=p[0]+sum;
    for(i=1;i<5;i++){
        scanf("%lld",&p[i]);
        if(max<p[i])
            max=p[i];
        if(min>p[i])
            min=p[i];
        sum=sum+p[i];
    }
    printf("%lld %lld" ,sum-max, sum-min);
    
    return 0;
}
