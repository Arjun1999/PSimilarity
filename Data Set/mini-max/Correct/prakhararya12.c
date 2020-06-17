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
    long long int x,max,min;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
   
    long long int s[5]={a+b+c+d,a+c+d+e,a+b+d+e,a+b+c+e,b+c+d+e,};
    max=s[0];
    min=s[4];
    for(int i=0;i<5;i++)
        {
        if(s[i]>max)
        {   
            max=s[i];
        }
        
        if(s[i]<min)
        { 
            min=s[i];        
        }
        
        
    }
    printf("%lld %lld",min,max);
    return 0;
}
