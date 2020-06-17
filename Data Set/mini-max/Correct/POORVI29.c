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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int s1,s2,s3,s4,s5,min,max;
    s1=b+c+d+e;
    min=max=s1;
    s2=a+c+d+e;
    if(s1>s2)
        min=s2;
    else
        max=s2;
    s3=a+b+d+e;
    if(s3>max)
        max=s3;
    if(min>s3)
        min=s3;
    s4=a+b+c+e;
    if(s4>max)
        max=s4;
    if(min>s4)
        min=s4;
    s5=a+b+c+d;
    if(s5>max)
        max=s5;
    if(min>s5)
        min=s5;
    printf("%ld %ld",min,max);
    return 0;
}
