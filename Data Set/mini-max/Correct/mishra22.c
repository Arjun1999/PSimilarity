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
    long long int min,max,temp1,temp2;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    min=b+c+d+e;
    max=b+c+d+e;
    temp1=a+c+d+e;
    temp2=a+c+d+e;
    if(min>temp1)
        min=temp1;
    if(max<temp2)
        max=temp2;
    temp1=a+b+d+e;
    temp2=a+b+d+e;
    if(min>temp1)
        min=temp1;
    if(max<temp2)
        max=temp2;
    temp1=a+b+c+e;
    temp2=a+b+c+e;
    if(min>temp1)
        min=temp1;
    if(max<temp2)
        max=temp2;
    temp1=a+b+d+c;
    temp2=a+b+d+c;
    if(min>temp1)
        min=temp1;
    if(max<temp2)
        max=temp2;
    printf("%lld %lld",min,max);
    
    return 0;
}
