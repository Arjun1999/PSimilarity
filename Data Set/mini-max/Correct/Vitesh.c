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
    long int e,max=0,min=0;
    long int s1=0,s2=0,s3=0,s4=0,s5=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    s1=b+c+d+e;
    s2=a+c+d+e;
    s3=a+b+d+e;
    s4=a+b+c+e;
    s5=a+b+c+d;
    if(a==b&&b==c&&c==d&&d==e)
        {
        max=min=a+b+c+d;
    }
    else
        {
        if(s1>s2&&s1>s3&&s1>s4&&s1>s5)
       max=s1;
    if(s2>s1&&s2>s3&&s2>s4&&s2>s5)
        max=s2;
    if(s3>s1&&s3>s2&&s3>s4&&s3>s5)
        max=s3;
    if(s4>s1&&s4>s2&&s4>s3&&s4>s5)
        max=s4;
    if(s5>s1&&s5>s2&&s5>s3&&s5>s4)
        max=s5;
    if(s1<s2&&s1<s3&&s1<s4&&s1<s5)
        min=s1;
    if(s2<s1&&s2<s3&&s2<s4&&s2<s5)
        min=s2;
    if(s3<s1&&s3<s2&&s3<s4&&s3<s5)
        min=s3;
    if(s4<s1&&s4<s2&&s4<s3&&s4<s5)
        min=s4;
    if(s5<s1&&s5<s2&&s5<s3&&s5<s4)
        min=s5;
}
    printf("%ld %ld",min,max);
}
