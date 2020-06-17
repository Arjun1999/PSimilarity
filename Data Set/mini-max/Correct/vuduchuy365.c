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
    long long int s[5], i, n;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    s[0]=b+c+d+e;
    s[1]=a+c+d+e;
    s[2]=a+b+d+e;
    s[3]=a+b+c+e;
    s[4]=a+b+c+d;
    for(i=0; i< 5; i++){
        if(s[i]<s[i+1]){
            n=s[i];
            s[i+1]=s[i];
            s[i]=n;
        }
    }
    printf("%lld", s[4]);
    printf(" ");
    s[0]=b+c+d+e;
    s[1]=a+c+d+e;
    s[2]=a+b+d+e;
    s[3]=a+b+c+e;
    s[4]=a+b+c+d;
    for(i=0; i< 5; i++){
        if(s[i]>s[i+1]){
            n=s[i];
            s[i+1]=s[i];
            s[i]=n;
        }
    }
    printf("%lld", s[4]);
    return 0;
}
