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
    long int s,g;
    long int s1,s2,s3,s4,s5;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    s1=a+b+c+d;
    s2=b+c+d+e;
    s3=a+c+d+e;
    s4=a+b+d+e;
    s5=a+b+c+e;
    g=s1;
    if(g<s2)
        g=s2;
    if(g<s3)
        g=s3;
    if(g<s4)
      g=s4;
    if(g<s5)
        g=s5;
    s=s1;
    if(s>s2)
        s=s2;
    if(s>s3)
        s=s3;
    if(s>s4)
        s=s4;
    if(s>s5)
        s=s5;
    printf("%ld %ld",s,g);
    return 0;
}
