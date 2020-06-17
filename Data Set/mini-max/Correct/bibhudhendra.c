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
    long long int s[5],max,min;
    int i;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    s[0]=b+c+d+e;
    s[1]=c+d+e+a;
    s[2]=d+e+a+b;
    s[3]=e+a+b+c;
    s[4]=a+b+c+d;
    if(s[0]>s[1])
       { 
        max=s[0];
        min=s[1];
    }
    else if(s[1]>s[0])
       {
        min=s[0];
        max=s[1];
    }
    for(i=2;i<=4;i++)
        {
        if(s[i]>max)
            max=s[i];
        else if(s[i]<min)
            min=s[i];
    }
    printf("%lld %lld",min,max);
    return 0;
}
