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
    
    long long int sum=a+b+c+d+e;
    
    long long int tmp=sum;
    if(sum-a<tmp) 
    {
        tmp=tmp-a;
    }
    if(sum-b<tmp)
    {
        tmp=sum;
        tmp=tmp-b;
    }
    if(sum-c<tmp)
    {
        tmp=sum;
        tmp=tmp-c;
    }
    if(sum-d<tmp)
    {
        tmp=sum;
        tmp=tmp-d;
    }
    if(sum-e<tmp)
    {
        tmp=sum;
        tmp=tmp-e;
    }
    
    
    
    printf("%lld ",tmp);
    
    tmp=sum;
    if(sum-a<tmp) 
    {
        tmp=tmp-a;
    }
    if(sum-b>tmp)
    {
        tmp=sum;
        tmp=tmp-b;
    }
    if(sum-c>tmp)
    {
        tmp=sum;
        tmp=tmp-c;
    }
    if(sum-d>tmp)
    {
        tmp=sum;
        tmp=tmp-d;
    }
    if(sum-e>tmp)
    {
        tmp=sum;
        tmp=tmp-e;
    }
    printf("%lld\n",tmp);
    return 0;
}
