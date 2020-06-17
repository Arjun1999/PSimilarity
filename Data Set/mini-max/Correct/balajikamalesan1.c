#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int max(int a,int b,int c){
    int max=0;
    if(a>b){
        if(a>c)
            max=a;
            else max=c;
        
    }
    else if(b>c)
        max=b;
    
    else max=c;

       return max;
}

int min(int a, int b, int c){
    
     int min=0;
    
        if(a<b){
            if(a<c) min=a;
            else min=c;
        }
        else if(b<c) min=b;
            else min=c;

        return min;
}
int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e,sum=0,max1=0,min1=0,minimum=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    sum=a+b+c+d+e;
    
    max1=max(a,b,c);
    //printf("%lld",max1);
    max1=max(max1,d,e);
    //printf("%lld",max1);
    
    min1=min(a,b,c);
    //printf("%lld",min1);
    min1=min(min1,d,e);
    //printf("%lld",min1);
    
    minimum=sum-max1;
    max1=sum-min1;
    
    printf("%lld %lld",minimum,max1);
    
    return 0;
}
