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
    long long int m[5]={a,b,c,d,e},sum=0,min,max;
    min=m[0];
    max=m[0];
    sum=sum+m[0];
    for(int i=1;i<5;i++)
    {
        if(min>m[i])
            min=m[i];
        if(max<m[i])
            max=m[i];
        sum=sum+m[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
