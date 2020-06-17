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
    long long int x1,x2,x3,x4,x5;
    x1=b+c+d+e;
    x2=a+c+d+e;
    x3=a+b+d+e;
    x4=a+b+c+e;
    x5=a+b+c+d;
    if((x1<x2)&&(x1<x3)&&(x1<x4)&&(x1<x5))
        printf("%lld ",x1);
    else if((x2<x3)&&(x2<x4)&&(x2<x5))
        printf("%lld ",x2);
    else if((x3<x4)&&(x3<x5))
        printf("%lld ",x3);
    else if(x4<x5)
        printf("%lld ",x4);
    else
        printf("%lld ",x5);
    if((x1>x2)&&(x1>x3)&&(x1>x4)&&(x1>x5))
        printf("%lld ",x1);
    else if((x2>x3)&&(x2>x4)&&(x2>x5))
        printf("%lld ",x2);
    else if((x3>x4)&&(x3>x5))
        printf("%lld ",x3);
    else if(x4>x5)
        printf("%lld ",x4);
    else
        printf("%lld ",x5);
    return 0;
}
