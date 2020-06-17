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
    long int t[5],temp,t2,sum;
    int i;
    t[0]=a;t[1]=b;t[2]=c;t[3]=d;t[4]=e;
    temp=t2=sum=t[0];
    for(i=1;i<5;i++){
        if(temp>t[i])
            temp=t[i];
        if(t2<t[i])
            t2=t[i];
        sum=sum+t[i];}
    printf("%lld %lld",sum-t2,sum-temp);
    return 0;
}
