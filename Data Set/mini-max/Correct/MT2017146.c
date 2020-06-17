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
    long min,max;
    scanf("%ld %ld %ld %ld %lld",&a,&b,&c,&d,&e);
    long s1=0,s2=0,s3=0,s4=0,s5=0;
    long sum=a+b+c+d+e;
    s1=sum-a;
    s2=sum-b;
    s3=sum-c;
    s4=sum-d;
    s5=sum-e;
    if(s1>s2 && s1>s3 && s1>s4 && s1>s5)
        max= s1;
    if(s2>s1 && s2>s3 && s2>s4 && s2>s5)
        max= s2;
    if(s3>s2 && s3>s1 && s3>s4 && s3>s5)
        max= s3;
    if(s4>s1 && s4>s2 && s4>s3 && s4>s5)
        max= s4;
    if(s5>s2 && s5>s3 && s5>s4 && s5>s1)
        max= s5;
    if(s1<s2 && s1<s3 && s1<s4 && s1<s5)
        min= s1;
    if(s2<s1 && s2<s3 && s2<s4 && s2<s5)
        min= s2;
    if(s3<s2 && s3<s1 && s3<s4 && s3<s5)
        min= s3;
    if(s4<s1 && s4<s2 && s4<s3 && s4<s5)
        min= s4;
    if(s5<s2 && s5<s3 && s5<s4 && s5<s1)
        min= s5;
    if(s1==s2 && s2==s3 && s3==s4 && s4==s5)
    { min=s1;max=s1;}
    
    printf("%ld %ld",min,max);
    return 0;
}
