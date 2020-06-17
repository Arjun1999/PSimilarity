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
    long z[10]={a,b,c,d,e};
    int i;
    long small=z[0];
    long large=z[0];
    for(i=1;i<5;i++)
        {
        if(z[i]<small)
            small=z[i];
        if(z[i]>large)
            large=z[i];
    }
    long min=0,max=0;
    for(i=0;i<5;i++)
        {
        if(z[i]!=small)
            max+=z[i];
    }
    for(i=0;i<5;i++)
        {
        if(z[i]!=large)
            min+=z[i];
    }
    int m=z[0];
    int count=0;
    for(i=1;i<5;i++)
        {
        if(z[i]==m)
            count++;
    }
    if(count==4){
        min=m*4;
    max=m*4;}
    printf("%lld %lld",min,max);
    return 0;
}
